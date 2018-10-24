# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 16:20:09 by jcrisp            #+#    #+#              #
#    Updated: 2018/10/24 11:16:20 by jcrisp           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = grimly.a
CFLAGS = -Wall -Werror -Wextra
FILES = ./ft_atoi.c ./ft_isdigit.c ./ft_strcpy.c ./ft_strclr.c ./specLine.c
OBJ = $(FILES:%.c=%.o)

$(NAME):
			$(CC) $(CFLAGS) -c $(FILES) -I grimly.h
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)
all: $(NAME)

clean:
	rm - f $(OBJ)

fclean: clean
	rm - f $(NAME)

re: fclean all

.PHONY: clean fclean all re
