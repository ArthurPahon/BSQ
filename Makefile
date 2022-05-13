##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC = $(wildcard lib/my/*.c)	\
	  $(wildcard src/*.c)

SRC = $(shell find . -name '*.c')

OBJ = $(SRC:%.c=%.o)
.SILENT:$(OBJ)

CFLAGS = -Iinclude/ -Wno-deprecated

NAME = bsq

.SILENT:$(NAME)
$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\x1b[1m\x1b[32mCompilation done !\x1b[0m"

.PHONY: all
all: $(NAME)

.SILENT:clean
.PHONY: clean
clean:
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[33mThe project is now clean !\x1b[0m"

.SILENT:fclean
.PHONY: fclean
fclean: clean
	rm -f $(NAME)
	@echo "\x1b[1m\x1b[31mThe binary is now delete !\x1b[0m"

.PHONY: re
re: fclean all
