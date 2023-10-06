NAME = UnnecessaryViolence

FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:clean

re: fclean all