NAME = ponies

C_FILES = main.cpp Poney.cpp PoneyOnTheHeap.cpp PoneyOnTheStack.cpp

H = Poney.hpp

CC = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(C_FILES) $H
	$(CC) $(FLAGS) $(C_FILES) -o $@

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
