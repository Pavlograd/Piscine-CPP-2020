##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## create gcc Makefile
##

SRC			=	src/main.cpp 				\
				src/text/open_window.cpp	\
				src/data/RAM.cpp			\
				src/data/CPU.cpp			\
				src/data/Date.cpp			\
				src/data/Network.cpp		\
				src/data/System.cpp			\
				src/data/UpTime.cpp			\
				src/data/User.cpp			\
				src/graphical/window.cpp	\
				src/graphical/display.cpp	\

NAME		= MyGKrellm

OBJ			= $(SRC:.cpp=.o)

XX			= g++

CXXFLAGS		= -Wall -Werror -Wextra

LNCURSES	=	-lncurses

SFMLFLAGS	=	-lsfml-graphics -lsfml-window -lsfml-system

INCLUDE 	=	-I./include/

GRAPH		=	-I./include/graphical/

TEXT		=	-I./include/text/

DATA		=	-I./include/data

all		: $(NAME)

$(NAME)		: $(OBJ)
		$(XX) -o $(NAME) $(OBJ) $(LNCURSES) $(SFMLFLAGS) $(CXXFLAGS) $(TEXT) $(GRAPH) $(DATA) $(INCLUDE)

clean		:
		rm -rf $(OBJ)

fclean		: clean
		rm -rf $(NAME)

re		: fclean all

debug		: $(CXXFLAGS) += -g

debug		: re

.cpp.o:
		$(XX) -c $< -o $@ $(INCLUDE) $(TEXT) $(GRAPH) $(DATA) $(CXXFLAGS)
