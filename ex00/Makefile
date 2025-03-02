SRC = main.cpp WrongAnimal.cpp WrongCat.cpp Cat.cpp Dog.cpp Animal.cpp
NAME = DogCat
CC = c++
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
all:$(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  -o $(NAME)
%.o:%.cpp WrongAnimal.hpp WrongCat.hpp Cat.hpp Dog.hpp Animal.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re: fclean all