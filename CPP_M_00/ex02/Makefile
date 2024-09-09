# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 12:10:30 by aghounam          #+#    #+#              #
#    Updated: 2024/08/14 14:38:41 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++ -std=c++98 
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean