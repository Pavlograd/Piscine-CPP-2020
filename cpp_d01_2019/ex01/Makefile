CXX = gcc
CXXFLAGS = -std=gnu11 -Wall -Wextra -lm

SRC = 	main.c		\
		menger.c
OBJ = $(SRC:.c=.o)
EXEC = menger

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS) $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(EXEC)

fclean:
	rm -rf $(OBJ)

re:
	rm -rf $(OBJ)