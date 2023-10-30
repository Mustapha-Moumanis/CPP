NAME = a.out

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g -std=c++98 

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all