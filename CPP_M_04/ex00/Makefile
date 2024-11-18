# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 10:37:17 by aghounam          #+#    #+#              #
#    Updated: 2024/11/17 17:11:04 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp Animal.cpp    Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

obj = $(src:.cpp=.o)

HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

all: $(NAME)

$(NAME): $(obj)
	$(CC) $(FLAGS) $(obj) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all