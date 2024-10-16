# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 10:37:17 by aghounam          #+#    #+#              #
#    Updated: 2024/10/10 12:04:56 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp animal.cpp Brain.cpp

obj = $(src:.cpp=.o)

HEADERS = animal.hpp Brain.hpp

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