# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pconin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 15:21:08 by pconin            #+#    #+#              #
#    Updated: 2015/12/11 13:26:36 by pconin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

SRC = ./fillit.c	\
	  ./error.c		\
	  ./check.c

HEAD = ./includes/

FLAGS = -Wall -Wextra -Werror

$(NAME) :
	gcc -o $(NAME) $(SRC) -I $(HEAD) 

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

gen :
	./test pieces
