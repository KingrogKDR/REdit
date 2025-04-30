CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pedantic -ggdb
TARGET = redit
SRC = src/main.c src/renderer.c
LDFLAGS = -lncurses

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)