# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 20:13:33 by aghounam          #+#    #+#              #
#    Updated: 2024/08/30 18:09:25 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary

CC = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
src = main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp
obj = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(obj)
	$(CC) $(CFLAGS) $(obj) -o $(NAME) 

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all
