NAME = harlFilter

FILES = main.cpp Harl.cpp

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:clean

re: fclean all