NAME = PmergeMe

CFILES = main.cpp PmergeMe.cpp

HFILES = PmergeMe.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CFILES:.cpp=.o)

all: $(NAME)

$(OBJS) : $(CFILES)
	@echo "compilation FILES ..."
	@$(CC) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJS) $(HFILES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "cleaning OBJS files"
	@rm -f $(OBJS)

fclean: clean
	@echo "cleaning PmergeMe file"
	@rm -f $(NAME)

re: fclean all