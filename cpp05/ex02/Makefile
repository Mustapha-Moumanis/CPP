NAME = a.out

FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all