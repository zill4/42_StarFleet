CC = gcc
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
FILES = ./ft_itoab.c  ./ft_putnbr.c ./ft_putstr.c ./ft_putchar.c ./b_printf.c ./ft_isalpha.c ./ft_tolower.c ./ft_isalnum.c ./ft_isdigit.c ./ft_strlen.c \
		./ft_atoi.c ./ft_strncpy.c ./ft_strncat.c ./ft_strjoin.c ./ft_strnew.c ./ft_memalloc.c ./ft_bzero.c ./ft_memset.c

OBJ = $(FILES:%.c=%.o)
$(NAME):
		$(CC) $(CFLAGS) -c $(FILES) -I ft_printf.h
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
