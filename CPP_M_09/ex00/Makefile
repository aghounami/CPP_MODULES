# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 17:07:03 by aghounam          #+#    #+#              #
#    Updated: 2024/12/12 18:21:31 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp BitcoinExchange.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

$(NAME) : $(obj)
	$(CC) $(FLAGS) $(obj) -o $(NAME)

%.o: %.cpp BitcoinExchange.hpp
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	rm -f $(obj)

fclean : clean
	rm -f $(NAME)

re : fclean all