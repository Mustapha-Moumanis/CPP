NAME = a.out

FILES = main.cpp Fixed.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:clean

re: fclean all