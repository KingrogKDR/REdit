CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = src/main.c src/editor.c src/input_handler.c src/renderer.c src/file_manager.c
BUILD_DIR = build
OBJ = $(SRC:src/%.c=$(BUILD_DIR)/%.o)
TARGET = text_editor

all: $(TARGET)

$(BUILD_DIR)/%.o: src/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
