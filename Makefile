##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## 104intersection
##

all:
	make -C antman/
	make -C giantman/
clean:
	make clean -C antman/
	make clean -C giantman/

fclean: clean
	make fclean -C antman/
	make fclean -C giantman/

re:	fclean all
