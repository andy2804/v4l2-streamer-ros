# -*- coding: utf-8 -*-
"""
Created on Tue Jun 21 08:48:14 2016

@author: jimamura
"""

import tkinter as tk
from tkinter import ttk
from tkinter import scrolledtext as scrol
from tkinter import messagebox as mBox
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
from matplotlib.pyplot import get_cmap
try:
    from tifffile import imsave as saveTIFF
    from tifffile import imread as openTIFF
except ImportError:
    print("TIFF support not available!")
from numpy import array,random, zeros, uint8,uint16,int8,int16,float16,float32,uint32,int32,nan,NaN,inf,Inf,frombuffer
from pylab import figure
import struct
from time import sleep, strftime, time

try:
    import serial.tools.list_ports as sertools
    HAS_SERIAL_LIST = True
except ImportError:
    print("serial port recovery not available!")
    HAS_SERIAL_LIST = False

import os.path, sys
sys.path.append(os.path.abspath(".."))

manualport,manualbaud=None,None
print(sys.argv[1:])
for item in sys.argv[1:]:
    if "port=" in item:
        manualport = item.replace("port=","").strip()
    if "baud=" in item:
        manualbaud = item.replace("baud=","").strip()


# This import works because of the code inside __init__.py located inside the ClientFiles_Python folder
from ClientFiles_Python import *

try: 
    MEM_CHUNK_MAX = pyClient.MaxMemoryChunk
except AttributeError:
    print("Defaulting to hardcoded memory chunk maximum size!")
    MEM_CHUNK_MAX = 256

print("Initializing Camera Comms...")
comm_handle = pyClient.Initialize(manualini=manualini,manualport=manualport,manualbaud=manualbaud,uselegacy=uselegacy)

close_comms = lambda : pyClient.Close(self.comm_handle)

result,size, rows, cols = pyClient.memGetCaptureSize( )
if result == pyClient.FLR_RESULT.R_SUCCESS:
    rows = rows
    cols = cols
else:
    raise IOError("UserMode rows and cols failed: {:s}".format(result.name))
            
bpp_8 = rows*cols
if bpp_8 % 0x1000:
    bpp_8_flash = (int(bpp_8/0x1000)+1)*0x1000
else:
    bpp_8_flash = bpp_8
bpp_16 = rows*cols*2
if bpp_16 % 0x1000:
    bpp_16_flash = (int(bpp_16/0x1000)+1)*0x1000
else:
    bpp_16_flash = bpp_16
bpp_32 = rows*cols*4
expectedByteCounts = (bpp_8, bpp_16,bpp_32)
print("Expected image buffer size: {:d}x{:d} == {:d} pixels".format(cols,rows,bpp_8))


capture_index = 0
cap_settings = FLR_CAPTURE_SETTINGS_T()
cap_settings.dataSrc = FLR_CAPTURE_SRC_E.FLR_CAPTURE_SRC_TNF
cap_settings.numFrames = 1
cap_settings.bufferIndex = capture_index

result = pyClient.captureFrames(cap_settings)
if result == FLR_RESULT.R_SUCCESS:
    print("Capture TNF to buffer 0, success!")
else:
    raise IOError("Failed image capture!")

result,size, rows, cols = pyClient.memGetCaptureSize( )

if result == pyClient.FLR_RESULT.R_SUCCESS:
    print("Capture Size: {1:d} 0x{1:08X}".format(None,size))
else:
    raise IOError("Get Image size failed!\n\t{!s}".format(result))

buffer = zeros(size,dtype=uint8)
if size in expectedByteCounts:
    offsetlist = range(0,size,MEM_CHUNK_MAX)
    
    for idx, offset in enumerate(offsetlist):
        
        chunksize = size-offset
        if chunksize > MEM_CHUNK_MAX:
            chunksize = MEM_CHUNK_MAX
        if chunksize > 0:
            try:
                print("offset 0x{:08X} chunk {:d}".format(offset, chunksize))
                result, data = pyClient.memReadCapture(capture_index, offset, chunksize)
            except Exception as e:
                result, data = [e,None]
        else:
            result, data = "Negative chunk size requested! {:d}".format(chunksize), None
        if result == pyClient.FLR_RESULT.R_SUCCESS:
            buffer[offset:offset+chunksize] = data
        else:
            raise IOError("memReadCapture({:d}, 0x{:08X}, {:d}) failed! {:s}".format(capture_index,offset,chunksize,str(result)))
    else: #no failures
        try:
            parsed.lower()
        except:
            parsed = ""
        
        if size == bpp_8:
            if "signed" in parsed.lower():
                img_ints = array(struct.unpack("<{:s}".format("".join(["b"]*size)),buffer),dtype =int8).reshape((rows,cols))
            else:
                img_ints = array(struct.unpack("<{:s}".format("".join(["B"]*size)),buffer),dtype =uint8).reshape((rows,cols))
        elif size == bpp_16:
            if "float" in parsed.lower():
                print("float16")
#                            littlefloat16 = float16(0.0).dtype.newbyteorder('<')
                img_ints = frombuffer(buffer,dtype=float16).reshape((rows,cols))
            elif "signed" in parsed.lower():
                img_ints = array(struct.unpack("<{:s}".format("".join(["h"]*int(size/2))),buffer),dtype =int16).reshape((rows,cols))
            else:
                img_ints = array(struct.unpack("<{:s}".format("".join(["H"]*int(size/2))),buffer),dtype =uint16).reshape((rows,cols))
        elif size == bpp_32:
            if "float" in parsed.lower():
                img_ints = array(struct.unpack("<{:s}".format("".join(["f"]*int(size/4))),buffer),dtype =float32).reshape((rows,cols))
            elif "signed" in parsed.lower():
                img_ints = array(struct.unpack("<{:s}".format("".join(["i"]*int(size/4))),buffer),dtype =int32).reshape((rows,cols))
            else:
                img_ints = array(struct.unpack("<{:s}".format("".join(["I"]*int(size/4))),buffer),dtype =uint32).reshape((rows,cols))

print("AVG: {0:.2f}".format(img_ints.mean()))
print("STD: {0:.2f}".format(img_ints.std()))
print("LOW VAL:  {:6}".format(img_ints.min()))
print("HIGH VAL: {:6}".format(img_ints.max()))


fig1 = figure(1)
subplot = fig1.add_subplot(111)

mylims = [float(img_ints.min()),float(img_ints.max())]
if mylims[0] in (nan,NaN,inf,Inf):
    mylims[0] = -32768
if mylims[1] in (nan,NaN,inf,Inf):
    mylims[1] = 32767
subplot.matshow(img_ints,clim=mylims,cmap="Greys_r")
subplot.figure.canvas.draw()
fig1.show()
input()
