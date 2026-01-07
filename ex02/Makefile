SRC = Account.cpp tests.cpp
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJ = $(SRC:.cpp=.o)

NAME = account

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re