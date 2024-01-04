NAME = phonebook

CC = clang++
CFLAGS = -Wall -Werror -Wextra
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