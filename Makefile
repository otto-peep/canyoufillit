#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: banthony <banthony@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:22:07 by banthony          #+#    #+#              #
#    Updated: 2016/01/05 15:04:01 by pconin           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

PATH1 =./src/

HEAD = -I ./include

LIB = -L./libft -lft

FILE = 	ft_close.c				ft_elmtcpy.c		ft_error.c		\
		ft_first_c_inmap.c		ft_get_piece.c		ft_identify.c	\
		ft_init_file.c			ft_init_list.c		ft_list_last.c	\
		ft_list_push_front.c	ft_lstlen.c			ft_mapcpy.c		\
		ft_open_create.c		ft_open_rdly.c		ft_partcmp.c	\
		ft_push_elmt_back.c		ft_readnly.c		ft_replace_sharp.c	\
		main.c					map.c				min_sqtall.c	\
		print.c					putpieces.c			resolution.c	\
		check.c					reinit_tetri.c		prev_tetri.c

SRC = $(FILE:%c=$(PATH1)%c)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(HEAD) $(LIB)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

gen :
	./test pieces
