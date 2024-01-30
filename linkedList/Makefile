##
## EPITECH PROJECT, 2023
## data-structure-c
## File description:
## Makefile
##

SRC	=	$(wildcard ./*.c)\

OBJ = $(SRC:.c=.o)

TESTS_SRC = tests.c

TESTS = $(addprefix tests/,$(TESTS_SRC))

CFLAGS = -std=gnu17 -Wall -Wextra -g3

CRITERION = --coverage -lcriterion

NAME = libstring.a

TESTS_NAME = unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *.gcda
	rm -f *.gcno

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTS_NAME)

re: fclean all
	$(MAKE) clean

tests_clean: clean
	rm -f $(TESTS_NAME)

tests_comp: clean
	gcc $(CRITERION) $(CFLAGS) -o $(TESTS_NAME) $(SRC) $(TESTS)

tests_run: tests_comp
	./$(TESTS_NAME)

tests_cover: tests_run
	gcovr -e tests/