# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/15 18:57:49 by jcrisp            #+#    #+#              #
#    Updated: 2018/10/17 23:39:26 by jcrisp           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = bistro.a
CFLAGS =  -Wall -Wextra -Werror
FILES =  ./emnumPop.c ./emnumPrint.c ./emnumPush.c ./ft_atoi.c ./ft_isascii.c ./ft_isdigit.c ./ft_strsize.c \
		./initEmnum.c 

OBJ = $(FILES:%.c=%.o)

$(NAME):
		$(CC) $(CFLAGS) -c $(FILES) -I bistro.h
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean:
	rm -f$(OBJ)

fclean: clean
	rm -f$(NAME)

re: fclean all

.PHONY: clean fclean all re
