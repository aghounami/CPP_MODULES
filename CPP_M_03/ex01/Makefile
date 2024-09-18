# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 20:57:57 by aghounam          #+#    #+#              #
#    Updated: 2024/09/11 20:58:36 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Serena

FLAGS = -Wall -Wextra -Werror

CC = c++ -std=c++98

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all