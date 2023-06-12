# Specify the Compiler
CC=gcc

# Specifying the flags to be used.
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89 -c

all:maths

maths: main.o accept_value.o add.o divide.o multiply.o subtract.o
	$(CC) main.o accept_value.o add.o divide.o multiply.o subtract.o -o maths

main.o:main.c main.h
	$(CC) $(CFLAGS) main.c

accept_value.o:accept_value.c main.h
	$(CC) $(CFLAGS) accept_value.c

add.o:add.c main.h
	$(CC) $(CFLAGS) add.c

divide.o:divide.c main.h
	$(CC) $(CFLAGS) divide.c

multiply.o:multiply.c main.h
	$(CC) $(CFLAGS) multiply.c

subtract.o:subtract.c main.h
	$(CC) $(CFLAGS) subtract.c

clean:
	rm -rf *.o maths