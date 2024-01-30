##
## EPITECH PROJECT, 2023
## data-structure-c
## File description:
## Makefile
##

CC = gcc
CFLAGS = -Wall -g

MAIN = main
TEST = unit_tests

SRCS = linkedList.c
TEST_SRCS = test.c other_source_file.c


OBJS = $(SRCS:.c=.o)
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

$(TEST): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(MAIN) $(TEST) $(OBJS) $(TEST_OBJS)

.PHONY: all clean
