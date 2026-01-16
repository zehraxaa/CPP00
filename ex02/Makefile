SRC = Account.cpp tests.cpp
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJ = $(SRC:.cpp=.o)

NAME = account

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re