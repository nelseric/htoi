CC=gcc
CFLAGS=-Wall -ggdb -std=c99
LDLIBS=
LDFLAGS=

SOURCES=main.c htoi.c

OBJECTS=$(SOURCES:.c=.o)

TARGET=htoi


.PHONY : clean run

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(LDFLAGS) $(LDLIBS) $(OBJECTS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

run: all
	./$(TARGET) < count_list.c
clean:
	rm $(OBJECTS) $(TARGET)

