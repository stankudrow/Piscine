ROOT := ..
UTILS_DIR := $(ROOT)/utils

CC := gcc
CWFLAGS := -Wall -Werror -Wextra
# Ubuntu specific
CSFLAGS := -fsanitize=address -fsanitize=leak
CFLAGS := $(CWFLAGS) $(CSFLAGS)

LISTC := $(shell find $(ROOT) -type f -name "ft_*.c")
MAINC := $(shell find . -type f -name "mainc*.c")
UTILSC := $(shell find $(UTILS_DIR) -type f -name "ft_*.c")
SOURCES := $(LISTC) $(MAINC)

.PHONY: all

all:
	$(CC) $(CFLAGS) -I $(UTILS_DIR) $(SOURCES)