# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnysten <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 14:40:37 by cnysten           #+#    #+#              #
#    Updated: 2021/10/30 12:22:28 by cnysten          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c ft_putstr.c ft_putchar.c ft_putchar_err.c ft_putstr_err.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:

fclean: clean
	/bin/rm ft_display_file

re: fclean all

