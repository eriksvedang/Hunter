CFLAGS=
LDFLAGS=

all: main.o;
	clang hunter.c main.c -o HunterExample -g -O0 $(CFLAGS) $(LDFLAGS)

run:
	./HunterExample

clean: rm -f *.o main
