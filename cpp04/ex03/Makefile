NAME = a.out

FILES = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all