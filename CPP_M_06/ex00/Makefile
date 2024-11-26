# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 11:16:27 by aghounam          #+#    #+#              #
#    Updated: 2024/11/26 17:23:15 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Conversion

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp ScalarConverter.cpp Converte.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.c ScalarConverter.hpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all