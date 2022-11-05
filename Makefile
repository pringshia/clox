TARGET=clox
BUILD_OUT=bin/
SOURCES=$(wildcard *.c)
MAIN=main.c

all: main.c
	mkdir -p $(BUILD_OUT)
	gcc $(SOURCES) -o $(BUILD_OUT)$(TARGET)
clean:
	rm -rf $(BUILD_OUT)
