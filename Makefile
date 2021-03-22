#############################################
# Parameters
# Compile
CC=gcc

# Linker
LINK=gcc

# Default goal
.DEFAULT_GOAL := all

#############################################
# Build of .o files

# Buil colorPrint.o
colorPrint.o:	colorPrint.c
	$(CC) -Wall -g -c colorPrint.c

#############################################
# Build testFile.o
testFile.o:	colorPrint.h testFile.c
	$(CC) -Wall -g -c testFile.c

#############################################
# Build the testFile executable
testFile:	testFile.o colorPrint.o
	$(CC) -Wall -g -o testFile testFile.o colorPrint.o

#############################################
# Miscellous command
all:	testFile
	$(CC) -Wall -g -o testFile testFile.o colorPrint.o

clean:	
	rm *.o main