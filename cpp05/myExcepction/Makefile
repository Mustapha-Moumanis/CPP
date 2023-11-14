NAME = a.out

FILES = main.cpp 

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all