CC = gcc
CFLAGS = -Wall -Wextra

all: build_ex1 build_ex2

build_ex1: ex1/ex1.c
	$(CC) $(CFLAGS) -o ex1/ex1 ex1/ex1.c

build_ex2: ex2/ex2.c
	$(CC) $(CFLAGS) -o ex2/ex2 ex2/ex2.c

clean:
	rm -f ex1/ex1 ex2/ex2