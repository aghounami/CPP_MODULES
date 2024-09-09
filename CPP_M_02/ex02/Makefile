# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 11:56:18 by aghounam          #+#    #+#              #
#    Updated: 2024/09/08 11:59:24 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = talking

CC = c++ -std=c++98

src = main.cpp Fixed.cpp

Cflags = -Wall -Wextra -Werror

OBJ = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(Cflags) $(OBJ) -o $(NAME)

%.o : %.cpp Fixed.hpp
	$(CC) $(Cflags) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

