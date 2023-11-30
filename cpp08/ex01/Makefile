NAME = a.out

FILES = main.cpp Span.cpp
HFILES = Span.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

all: $(NAME)

$(NAME): $(FILES) $(HFILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all