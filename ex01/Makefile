SRC = main.cpp   Cat.cpp Dog.cpp Animal.cpp Brain.cpp
NAME = DogCat
CC = c++
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
all:$(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ)  -o $(NAME)
%.o:%.cpp  Cat.hpp Dog.hpp Animal.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re: fclean all