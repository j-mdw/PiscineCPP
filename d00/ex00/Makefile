NAME = megaphone

C_FILES = megaphone.cpp

C = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(C_FILES)
	$C $(FLAGS) $^ -o $@

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
