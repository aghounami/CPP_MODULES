# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 18:23:49 by aghounam          #+#    #+#              #
#    Updated: 2024/12/17 15:07:49 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp PmergeMe.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

$(NAME) : $(obj)
	$(CC) $(FLAGS) $(obj) -o $(NAME)

%.o: %.cpp PmergeMe.hpp
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	rm -f $(obj)

fclean : clean
	rm -f $(NAME)

re : fclean all