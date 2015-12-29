/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfillit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:36:23 by pconin            #+#    #+#             */
/*   Updated: 2015/12/28 17:46:39 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILLIT_H

# define HEADERFILLIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	tetris
{
		char			**piece;
		int				x;
		int				y;
		char			ascii;
		struct tetris	*next;
}						p_list;

char	**ft_print_in_map(char **map, int xm, int ym, p_list *tetri);
int		trytoprint(char **map, p_list *tetri, int sqtall, int xt, int yt);
void	ft_printandquit(char **map);
char	**update_map(int sqtall, char ascii, char **map);
void	ft_recur_resolution(int sqtall, char **map, p_list *tetri);
int		ft_min_sqtall(p_list *tetri);
void	resolution(p_list *tetri, int sqtall);
char	**init_map(int sqtall, char **map);
void	ft_print_list(p_list *list);
void	ft_print_board(char **tab);
char	**ft_map_piece(size_t l, char const *str);
int		ft_endline(char const *str);
void	ft_list_push_back(p_list **begin_list, char const *str, int count);
p_list	*ft_create_elmt(char const *content, int count);
void	ft_get_piece(p_list **list, char *buf, size_t len);
void	error(int a);
int		check_line(char *buf, int index);
int		check_char(char *buf);
int		check_map(char *buf);
int		ft_check(char *buf);

#endif
