##
## EPITECH PROJECT, 2017
## santa
## File description:
## Makefile
##

LIBS_DIR	= ./include/

SRC 		= 	src/main.cpp 					\
				src/Object.cpp					\
				src/Toy.cpp						\
				src/Teddy.cpp 					\
				src/LittlePony.cpp				\
				src/Wrap.cpp					\
				src/Box.cpp						\
				src/GiftPaper.cpp				\
				src/PapaXmasConveyorBelt.cpp 	\
				src/PapaXmasTable.cpp			\
				src/Hand.cpp					\
				src/PapaXmasElf.cpp				\
				src/TableRand.cpp

NAME		= santa

OBJ		= $(SRC:.cpp=.o)

XX		= g++

CXXFLAGS		= -Wall -Werror -Wextra

INCLUDE 	=	-I./include/ -I./include/interface/

NUM = 0

all		: $(NAME)

$(NAME)		: $(OBJ)
		$(XX) -o $(NAME) $(OBJ) $(CXXFLAGS) $(INCLUDE)

clean		:
		rm -rf $(OBJ)

fclean		: clean
		rm -rf $(NAME)

re		: fclean all

debug		: $(CXXFLAGS) += -g

debug		: re

.cpp.o:
		$(XX) -c $< -o $@ $(INCLUDE) $(INTERFACE) $(CXXFLAGS)