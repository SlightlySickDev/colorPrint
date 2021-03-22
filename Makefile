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
# Build main.o
main.o:	colorPrint.h main.c
	$(CC) -Wall -g -c main.c

#############################################
# Build main executable
main:	main.o colorPrint.o
	$(CC) -Wall -g -o main main.o colorPrint.o

#############################################
# Miscellous command
all:	main
	$(CC) -Wall -g -o main main.o colorPrint.o

clean:	
	rm *.o main