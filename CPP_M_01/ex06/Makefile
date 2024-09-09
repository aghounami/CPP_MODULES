# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 19:33:29 by aghounam          #+#    #+#              #
#    Updated: 2024/08/30 18:09:54 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp Harl.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

$(NAME) : $(obj)
	$(CC) $(FLAGS) $(obj) -o $(NAME)

%.o: %.cpp Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(obj)

fclean : clean
	rm -f $(NAME)

re : fclean all