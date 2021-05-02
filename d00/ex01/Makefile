NAME = yellow_book

C_FILES = main.cpp YellowBook.cpp

H = YellowBook.hpp

CC = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(C_FILES) $H
	$(CC) $(FLAGS) $(C_FILES) -o $@

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
