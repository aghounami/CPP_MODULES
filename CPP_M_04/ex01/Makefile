# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 10:37:17 by aghounam          #+#    #+#              #
#    Updated: 2024/11/17 21:17:38 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp

obj = $(src:.cpp=.o)

HEADERS = Animal.hpp Brain.hpp Cat.hpp Dog.hpp

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