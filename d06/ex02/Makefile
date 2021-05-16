NAME = identifyType

F = -Wall -Werror -Wextra -std=c++98

C = clang++

FILES = main.cpp Base.cpp A.cpp B.cpp C.cpp

H = Base.hpp A.hpp B.hpp C.hpp

all: $(NAME)

$(NAME) : $(FILES) $H
	$C $F $(FILES) -o $@

clean:

fclean: clean
	rm -f $(NAME)

re: all

.PHONY: all clean fclean re
	
