NAME = zombieHorde

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp \
		ZombieHorde.cpp \
		Zombie.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all