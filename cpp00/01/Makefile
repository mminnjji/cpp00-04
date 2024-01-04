NAME = phonebook

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC	=	main.cpp \
		phonebook.cpp \

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) -g $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)
		
re: clean all