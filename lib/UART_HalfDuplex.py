# -*- coding: utf-8 -*-
"""
Created on Thu Dec 31 14:28:13 2015

@author: jimamura
"""
import ctypes, os, sys
import _ctypes
try:
    from EmulatorFiles.Factory_BOSON_GECKO import *
    from EmulatorFiles import Factory_INIUtils#, BASE_BosonGecko
    FOUND_INI = True
except:
    FOUND_INI = False

class UART():
    def __init__(self,dllPath = None,useLegacy=True):
        self.isClosed = False
        self.portOpen = False
        self.port_num = -1
        if useLegacy:
            dll_name = "UART_HalfDuplex64_legacy.dll"
        else:
            if (not "posix" in os.name):
                dll_name = "UART_HalfDuplex64.dll"
            else:
                dll_name = "UART_HalfDuplex64.so"

        if dllPath:
            loadpath = os.path.join(dllPath,dll_name)
        else:
            loadpath = os.path.join(os.path.dirname(__file__),dll_name)
        
        try:
            self.__library = ctypes.cdll.LoadLibrary(loadpath)
            self.__dllHandle = self.__library._handle
            self.camsend = self.__library.__getattr__("send_to_camera")
            self.camread = self.__library.__getattr__("read_frame")
            self.camunframed = self.__library.__getattr__("read_unframed")
#            try:
#                self.poll_frame = self.__library.__getattr__("poll_general_frame")
#            except:
#                self.poll_frame = None
            self.port_open = self.__library.__getattr__("open_port")
            self.port_close = self.__library.__getattr__("close_port")
        except OSError as e:
            print("dllPath = {!s}".format(dllPath))
            print("filePath = {!s}".format(os.path.dirname(__file__)))
            raise e
    def SendToCamera(self,ClientToCam,clientBytes,expectedReceiveBytes):
        ''' Send ClientToCam with len()=clientBytes to camera, 
        receive CamToClient with len()=camBytes
        '''
        if (not self.isClosed) and self.portOpen:
            sendBuffer = (ctypes.c_uint8*clientBytes)()
#            print("   Sent:\t{!s}".format(ClientToCam))
            for i,dat in enumerate(ClientToCam):
                sendBuffer[i] = dat
            sendBytes = ctypes.c_uint16(clientBytes)
            receiveBuffer = (ctypes.c_uint8*2048)(*[0xFF]*2048)
            receiveBytes = ctypes.c_uint16(expectedReceiveBytes)
            channel_ID = ctypes.c_uint8(0x00)
            start_byte_ms = ctypes.c_uint16(1000)
            self.camsend(ctypes.c_int32(self.port_num),channel_ID,sendBytes,sendBuffer)
            self.camread(ctypes.c_int32(self.port_num),channel_ID,start_byte_ms,ctypes.byref(receiveBytes),receiveBuffer)
            returnBuffer = []
            for i in range(receiveBytes.value):
                returnBuffer.append(receiveBuffer[i])
            returnBytes =  bytearray(returnBuffer)
#            print("   Recd:\t{!s}".format(returnBytes))
            return returnBytes
        else:
            raise Exception("Attempting to access closed DLL or closed COM port!")
    
    def SendFrame(self,ChannelID,ClientToCam,clientBytes):
        ''' Send ClientToCam with len()=clientBytes to camera, 
        receive CamToClient with len()=camBytes
        '''
        if (not self.isClosed) and self.portOpen:
            sendBuffer = (ctypes.c_uint8*clientBytes)()
            for i,dat in enumerate(ClientToCam):
                sendBuffer[i] = dat
            sendBytes = ctypes.c_uint16(clientBytes)
            channel_ID = ctypes.c_uint8(ChannelID)
            self.camsend(ctypes.c_int32(self.port_num),channel_ID,sendBytes,sendBuffer)
        else:
            raise Exception("Attempting to access closed DLL or closed COM port!")
    
    def ReadFrame(self,ChannelID,expectedReceiveBytes):
        ''' Send ClientToCam with len()=clientBytes to camera, 
        receive CamToClient with len()=camBytes
        '''
        if (not self.isClosed) and self.portOpen:
            receiveBuffer = (ctypes.c_uint8*2048)(*[0xFF]*2048)
            receiveBytes = ctypes.c_uint16(expectedReceiveBytes)
            channel_ID = ctypes.c_uint8(ChannelID)
            start_byte_ms = ctypes.c_uint16(1000)
            self.camread(ctypes.c_int32(self.port_num),channel_ID,start_byte_ms,ctypes.byref(receiveBytes),receiveBuffer)
            returnBuffer = []
            for i in range(receiveBytes.value):
                returnBuffer.append(receiveBuffer[i])
            returnBytes =  bytearray(returnBuffer)
            return returnBytes
        else:
            raise Exception("Attempting to access closed DLL or closed COM port!")
    
    def PollDebug(self, channel_ID):
        ''' Send ClientToCam with len()=clientBytes to camera, 
        receive CamToClient with len()=camBytes
        '''
        if (not self.isClosed) and self.portOpen:
            receiveBuffer = (ctypes.c_uint8*2048)(*[0xFF]*2048)
            receiveBytes = ctypes.c_uint16(0)
            channelID = ctypes.c_uint8(channel_ID)
            start_byte_ms = ctypes.c_uint16(25)
                                    #(int32_t port_num,uint8_t *channel_ID,uint32_t *receiveBytes, uint8_t *receiveBuffer);
            self.camread(ctypes.c_int32(self.port_num),channelID,start_byte_ms,ctypes.byref(receiveBytes),receiveBuffer)
            if receiveBytes.value == 0:
                return bytearray()
            
            returnBuffer = []
            for i in range(receiveBytes.value):
                returnBuffer.append(receiveBuffer[i])
            returnBytes =  bytearray(returnBuffer)
#            print("   Recd:\t{!s}".format(returnBytes))
            return returnBytes
        else:
            raise Exception("Attempting to access closed DLL or closed COM port!")
    
    def DumpUnframed(self):
        ''' Send ClientToCam with len()=clientBytes to camera, 
        receive CamToClient with len()=camBytes
        '''
        if (not self.isClosed) and self.portOpen:
            receiveBuffer = (ctypes.c_uint8*2048)(*[0xFF]*2048)
            receiveBytes = ctypes.c_uint16(0)
            start_byte_ms = ctypes.c_uint16(25)
            self.camunframed(ctypes.c_int32(self.port_num),start_byte_ms,ctypes.byref(receiveBytes),receiveBuffer)
            if receiveBytes.value == 0:
                return bytearray()
            
            returnBuffer = []
            for i in range(receiveBytes.value):
                returnBuffer.append(receiveBuffer[i])
            returnBytes =  bytearray(returnBuffer)
#            print("   Recd:\t{!s}".format(returnBytes))
            return returnBytes
        else:
            raise Exception("Attempting to access closed DLL or closed COM port!")
    
    def close(self):
        self.isClosed = True
        del(self.__library)
        if (not "posix" in os.name): 
            _ctypes.FreeLibrary(self.__dllHandle)

    def OpenPort(self,ini_name = "CameraSerialConfig.ini",manual_port=None,manual_baud=None):
        ''' Send ClientToCam with len()=clientBytes to camera, 
        receive CamToClient with len()=camBytes
        '''
        if FOUND_INI:
            if hasattr(sys, 'frozen'):
                infolder = os.path.dirname(os.path.abspath(sys.executable))
            else:
                infolder = os.path.dirname(os.path.abspath(__file__))
            iniPath = os.path.join(infolder, ini_name)
            configDict = Factory_INIUtils.readTestCameraINI(iniPath)
    #        timeout  = int(configDict[INI_TIMEOUT])
            portname = str(configDict[INI_COM_PORT])
        else:
            if not manual_port:
                raise ValueError("Must provide manual_port=\"COM<n>\" or manual_port=<n-1> argument")
        
        if manual_port:
            portname = str(manual_port)
        
        
        if "COM" in portname:
            portnum = int(portname.replace("COM",""))-1
        else:
            portnum = int(portname)
        self.port_num = portnum
        if FOUND_INI:
            baudrate = int(configDict[INI_BAUDRATE])
        else:
            baudrate = 921600
        if manual_baud:
            baudrate = int(manual_baud)
        
        print("PortNum: {:d} // {!s}\nBaudRate: {:d}".format(portnum,portname,baudrate))
#        print(configDict)
        ret = self.port_open(ctypes.c_int(portnum),ctypes.c_int(baudrate))
        if ret == 0:
            self.portOpen = True
            print("Port open")
        else:
            raise IOError("Failed to open COM port({:d}) ret={:d}!".format(portnum,ret))
    
    def ClosePort(self):
        self.port_close(ctypes.c_int32(self.port_num))
    
