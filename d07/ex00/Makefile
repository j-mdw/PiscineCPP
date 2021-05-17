NAME = templates00 

F = -Wall -Werror -Wextra -std=c++98

C = clang++

FILES = main.cpp

all: $(NAME)

$(NAME) : $(FILES)
	$C $F $^ -o $@

clean:

fclean: clean
	rm -f $(NAME)

re: all

.PHONY: all clean fclean re
	
