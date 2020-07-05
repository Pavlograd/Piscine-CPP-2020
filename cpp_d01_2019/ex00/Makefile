CXX = gcc
CXXFLAGS = -std=gnu11 -Wall -Wextra

SRC = z.c
OBJ = $(SRC:.c=.o)
EXEC = z

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)

fclean:
	rm -rf $(OBJ)

re:
	rm -rf $(OBJ)