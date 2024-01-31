CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

SRC_FILES = *.c
HEADER_FILE = binary_trees.h

TARGET = binary_tree

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_FILES)

clean:
	rm -f $(TARGET)

re: clean all
