#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: banthony <banthony@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 16:22:07 by banthony          #+#    #+#              #
#    Updated: 2016/01/12 18:11:45 by banthony         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

PATH1 =./src/

HEAD = -I ./include

FILE = 	ft_close.c				ft_elmtcpy.c		ft_error.c			\
		ft_first_c_inmap.c		ft_get_piece.c		ft_identify.c		\
		ft_init_list.c			ft_treatment.c		\
		ft_list_push_front.c	ft_lstlen.c			ft_mapcpy.c			\
		ft_open_rdly.c			ft_partcmp.c		ft_resolve2.c		\
		ft_push_elmt_back.c		ft_readnly.c		ft_replace_sharp.c	\
		main.c					map.c				min_sqtall.c		\
		print.c					putpieces.c			ft_increase_map.c	\
		check.c					reinit_tetri.c							\
		ft_free_map.c			prev_tetri.c							\
		lib.c					lib2.c

SRC = $(FILE:%c=$(PATH1)%c)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC) $(HEAD)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all