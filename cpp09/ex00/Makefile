NAME = btc

CFILES = main.cpp BitcoinExchange.cpp

HFILES = BitcoinExchange.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

OBJS = $(CFILES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HFILES)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all