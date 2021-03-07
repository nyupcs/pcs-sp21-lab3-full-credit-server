# service/Makefile
CC = gcc
TARGET = echo

all: echo

echo:
	$(CC) $(TARGET).c -fno-stack-protector -o $(TARGET)

clean:
	rm $(TARGET)
