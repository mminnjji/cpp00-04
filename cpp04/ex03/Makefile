NAME = ex03

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o	: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean:	clean
	rm -rf $(NAME)

re: fclean all
.PHONY = all clean fclean re