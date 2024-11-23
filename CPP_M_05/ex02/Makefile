# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 05:31:45 by aghounam          #+#    #+#              #
#    Updated: 2024/11/23 10:40:16 by aghounam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = maggots

SRCS = main.cpp Bureaucrat.cpp  AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all