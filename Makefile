CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic

SRC_FILES = main.c 0-binary_tree_node.c 1-binary_tree_insert_left.c binary_tree_print.c
HEADER_FILE = binary_trees.h

TARGET = binary_tree

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC_FILES)

clean:
	rm -f $(TARGET)

re: clean all
