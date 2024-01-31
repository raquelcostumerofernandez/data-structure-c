##
## EPITECH PROJECT, 2023
## data-structure-c
## File description:
## Makefile
##

CC = gcc

SRC	=	$(wildcard *.c)\

OBJ = $(SRC:.c=.o)

TESTS_SRC = test/test.c

CFLAGS = -std=gnu17 -Wall -Wextra -Werror -g3

CRITERION = --coverage -lcriterion

NAME = binaryTree

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CRITERION) $(CFLAGS) -o $(NAME) $(OBJ) $(TESTS_SRC)

clean:
	rm -f *.o
	rm -f *.gcda
	rm -f *.gcno

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTS_NAME)

re: fclean all
	$(MAKE) clean

tests_run: all
	./$(NAME)

tests_cover: tests_run
	gcovr -e tests/