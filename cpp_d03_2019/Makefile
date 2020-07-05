##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## match_nmatch
##

SRC	=	ex00.c	\
		ex01.c	\
		ex02.c	\
		ex03.c	\
		ex04.c	\
		ex05.c	\
		ex06.c	\
		ex07.c	\
		ex08.c	\
		ex09.c	\
		ex10.c	\
		ex11.c	\
		ex12.c	\
		ex13.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libstring.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all