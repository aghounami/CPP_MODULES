# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 09:56:50 by aghounam          #+#    #+#              #
#    Updated: 2024/12/06 22:51:55 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp Identify.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Identify.hpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all