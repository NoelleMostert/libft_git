NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror -c -I.
CFILES=	ft_atoi.c		ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_islower.c	ft_isprint.c \
		ft_isupper.c	ft_strcmp.c		ft_strdup.c		ft_strlen.c		ft_tolower.c	ft_toupper.c
OBJ=$(CFILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY=clean fclean re
