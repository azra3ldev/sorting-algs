# NOTE: this makefile is for building application only

# compiler configuration
CC = gcc
CFLAGS = -Wall -Wextra -O2 -DNDEBUG

# finds all source files
SRC_DIR = code
SRCS = $(wildcard $(SRC_DIR)/*/*.c)

# sets executable
OBJS = $(SRCS:.c=.o)
OUT_DIR = bin
TARGET = $(OUT_DIR)/sort

# configures the compilation of target
$(TARGET): $(OBJS)
	mkdir -p $(OUT_DIR)
	$(CC) $(CFLAGS) $^ -o $@
	rm $(OBJS)

# configures how the conversion from c file to object works
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
