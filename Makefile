# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pconin <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 15:21:08 by pconin            #+#    #+#              #
#    Updated: 2015/12/25 15:30:32 by pconin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = atest

FILES = cat_a.c	\
	   ./fct/libft.a

FILE =	./fct/libft.a	\
		fillit.c		\
	 	check.c			\
		error.c			\
		ft_get_piece.c	\
		print.c			\
		map.c			\
		resolution.c	\
		min_sqtall.c	\
		putpieces.c


PATHFT = ./fct/

FLAGS = -Wall -Wextra -Werror

OBJRDIR = .

SRC = $(FILE:%c=$(PATHFT)%c)

OBJ = $(FILE:%.c=$(OBJDIR)/%.o)
	
HEADER = ./includes

$(NAME) :
	gcc -o $(NAME) $(SRC) -I $(HEADER)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

gen :
	./test pieces
