# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pconin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 15:21:08 by pconin            #+#    #+#              #
#    Updated: 2015/12/10 18:22:23 by pconin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC = ./fillit.c	\
	  ./error.c

HEAD = ./includes/headerfillit.h

FLAGS = -Wall -Wextra -Werror

$(NAME) :
	gcc -o $(NAME) -I $(HEAD) $(SRC)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean $(NAME)

gen :
	./test pieces
