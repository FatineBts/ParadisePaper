CC=g++ -g
CCFLAGS= -Wall -Werror -std=c++11 -lSDL2
LIBFLAGS=
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)
EXEC= ParadisePaper

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) $^ -o $@	$(LIBFLAGS)

%.o: %.cc
		$(CC) $(CCFLAGS) -o $@ -c $<

.depends:
		g++ -MM $(SRC) > .depends

-include .depends

clean:
		rm -f $(OBJ) $(EXEC)