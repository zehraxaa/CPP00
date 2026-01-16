SRC = Contact.cpp PhoneBook.cpp main.cpp
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
OBJ = $(SRC:.cpp=.o)

NAME = phonebook

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