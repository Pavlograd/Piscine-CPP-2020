CXX = g++
CXXFLAGS = -Wall -Werror -Wextra

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = my_convert_temp

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re:	fclean all