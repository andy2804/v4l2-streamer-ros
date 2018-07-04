CFLAGS= -I.

ALLDEPS = UART_HalfDuplex.h flirCRC.h rs232.h flirChannels.h

ALLOBJBASE = flirCRC rs232 HostBinaryProtocol flirChannels
ALLOBJ32 = $(patsubst %,%_32.o,$(ALLOBJBASE))
ALLOBJ64 = $(patsubst %,%_64.o,$(ALLOBJBASE))
ALLOBJ32_LINUX = $(patsubst %,%_Linux32.o,$(ALLOBJBASE))
ALLOBJ64_LINUX = $(patsubst %,%_Linux64.o,$(ALLOBJBASE))

# WARNINGS = -Wall
WARNINGS = 

OSNAME := $(shell uname)
ifeq ($(OSNAME),Windows_NT)
	RM=del /S
	target = UART_HalfDuplex64.dll
else ifeq ($(OSNAME),Linux)
	RM=rm -f
	target =  UART_HalfDuplex64.so
else
#probably cygwin
	RM=rm -f
	target = UART_HalfDuplex64.dll
endif

all:
	make $(target) 

UART_HalfDuplex32.dll: $(ALLOBJ32) 
	gcc $(WARNINGS) -static-libgcc -shared -o $@ $^ 

UART_HalfDuplex64.dll: $(ALLOBJ64) 
	tcc -v -shared -m64 -o $@ $^ 

%_32.o: %.c  $(ALLDEPS)
	gcc $(WARNINGS) -c -o $@ $< $(CFLAGS)

%_64.o: %.c  $(ALLDEPS)
	tcc -v -c -o $@ $< $(CFLAGS)

%_Linux32.o: %.c  $(ALLDEPS)
	gcc -g -fPIC $(WARNINGS) -shared -m32 -c -o $@ $< $(CFLAGS)

%_Linux64.o: %.c  $(ALLDEPS)
	gcc -g -fPIC $(WARNINGS) -shared -m64 -c -o $@ $< $(CFLAGS)

rs232_Linux64.o: rs232.c $(ALLDEPS)
	gcc -g -fPIC $(WARNINGS) -shared -m64 -c -o $@ $< $(CFLAGS) -Derror=weird_name_to_resolve_name_conflict_error

UART_HalfDuplex32.so: $(ALLOBJ32_LINUX) 
	gcc -g -fPIC $(WARNINGS) -shared -m32 -o $@ $^ 

UART_HalfDuplex64.so: $(ALLOBJ64_LINUX) 
	gcc -g -fPIC $(WARNINGS) -shared -m64 -o $@ $^ 

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: clean_uart32
clean_uart32:
	$(RM) *UART*32.*

.PHONY: clean_uart64
clean_uart64:
	$(RM) *UART*64.*

