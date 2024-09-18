# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 15:50:40 by aghounam          #+#    #+#              #
#    Updated: 2024/09/11 16:48:10 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaand

FLAGS = -Wall -Wextra -Werror

CC = c++ -std=c++98

SRC = ClapTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp ClapTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all