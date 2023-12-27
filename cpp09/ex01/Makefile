NAME = RPN

CFILES = main.cpp RPN.cpp

HFILES = RPN.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(CFILES:.cpp=.o)

all: $(NAME)

$(OBJS) : $(CFILES)
	$(CC) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJS) $(HFILES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "cleaning OBJS files"
	@rm -f $(OBJS)

fclean: clean
	@echo "cleaning RPN file"
	@rm -f $(NAME)

re: fclean all