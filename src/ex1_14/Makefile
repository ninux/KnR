CFLAGS =  -pedantic-errors -Wall -Wextra -Wpedantic -I. -lm -std=c89
OBJECT_PATH = obj/
SOURCES = main.c

.PHONY: all clean

main:
	gcc $(CFLAGS) -o $(OBJECT_PATH)main.o $(SOURCES)

debug:
	gcc $(CFLAGS) -g -o $(OBJECT_PATH)debug.o $(SOURCES) -DDEBUG

all:
	gcc $(CFLAGS) -o $(OBJECT_PATH)main.o $(SOURCES)
	gcc $(CFLAGS) -g -o $(OBJECT_PATH)debug.o $(SOURCES) -DDEBUG

clean:
	rm $(OBJECT_PATH)main.o
	rm $(OBJECT_PATH)debug.o
