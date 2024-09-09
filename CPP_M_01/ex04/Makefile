# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 16:28:27 by aghounam          #+#    #+#              #
#    Updated: 2024/09/06 12:34:47 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp sed.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

$(NAME) : $(obj)
	$(CC) $(FLAGS) $(obj) -o $(NAME)

%.o: %.cpp sed.hpp
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	rm -f $(obj)

fclean : clean
	rm -f $(NAME)

re : fclean all