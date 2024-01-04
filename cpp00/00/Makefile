NAME = megaphone

CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRC = megaphone.cpp

RM = rm -f
.PHONY = all clean re

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $@

clean:
		$(RM) $(NAME)

re: clean all