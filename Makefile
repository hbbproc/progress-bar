hbb_PATH=$(shell pwd)
CC=gcc
TARGET=proc main
SRC=proc.c main.c

$(TARGET):$(SRC)
	$(CC) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(TARGET)
