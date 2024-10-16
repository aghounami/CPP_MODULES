NAME = Interface

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp AMateria.cpp ICharacter.cpp Character.cpp
obj = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(obj)
	$(CC) $(FLAGS) $(obj) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all