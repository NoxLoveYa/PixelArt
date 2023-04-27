##
## EPITECH PROJECT, 2023
## pixelArt
## File description:
## Makefile
##

TARGET = pixelArt
SRC = $(wildcard source/*.cpp source/*/*.cpp source/*/*/*.cpp source/*/*/*/*.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	g++ -o $(TARGET) $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

test: re
	make clean
	./$(TARGET)
