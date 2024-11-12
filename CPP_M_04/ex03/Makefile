NAME = Interface

CC = c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

src = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp
HEADERS = AMateria.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp
obj = $(src:.cpp=.o)

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