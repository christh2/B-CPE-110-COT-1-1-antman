##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## 104intersection
##

SRC 	=	$(wildcard *.c)

NAME 	=	giantman

all: $(NAME)

$(NAME):
	gcc $(SRC) -o $(NAME) -lm

clean:
	rm -f *#
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
