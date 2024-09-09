# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 12:10:02 by aghounam          #+#    #+#              #
#    Updated: 2024/08/21 16:56:33 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
C = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror -g

SRC = PhoneBook.cpp main.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all