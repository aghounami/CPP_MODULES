# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 15:11:02 by aghounam          #+#    #+#              #
#    Updated: 2024/11/28 00:06:23 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Serialization

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

CC = c++

SRC = main.cpp Serializer.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.c Serializer.hpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all