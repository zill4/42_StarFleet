# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/15 18:57:49 by jcrisp            #+#    #+#              #
#    Updated: 2018/10/15 19:45:09 by jcrisp           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = bistro.a
CFLAGS =  -Wall -Wextra -Werror
FILES = ./bistromatic.c 

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
