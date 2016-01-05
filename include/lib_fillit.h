/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_fillit.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:37:33 by banthony          #+#    #+#             */
/*   Updated: 2016/01/05 14:57:38 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIB_FILLIT_H
# define	LIB_FILLIT_H
#include <string.h>

# define LG1	"###.\n..#.\n....\n....\n"
# define LG2	".#..\n.#..\n##..\n....\n"
# define LG3	"#...\n###.\n....\n....\n"
# define LG4	"##..\n#...\n#...\n....\n"
# define T1		"###.\n.#..\n....\n....\n"
# define T2 	".#..\n##..\n.#..\n....\n"
# define T3		".#..\n###.\n....\n....\n"
# define T4		"#...\n##..\n#...\n....\n"
# define LD1	"###.\n#...\n....\n....\n"
# define LD2	"##..\n.#..\n.#..\n....\n"
# define LD3	"..#.\n###.\n....\n....\n"
# define LD4	"#...\n#...\n##..\n....\n"
# define ZG1	".##.\n##..\n....\n....\n"
# define ZG2	"#...\n##..\n.#..\n....\n"
# define L1		"####\n....\n....\n....\n"
# define L2		"#...\n#...\n#...\n#...\n"
# define square	"##..\n##..\n....\n....\n"
# define ZD1	"##..\n.##.\n....\n....\n"
# define ZD2	".#..\n##..\n#...\n....\n"
# define nb_l	4
# define nb_c	6

typedef struct	tetris
{
	char			**piece;
	int				x;
	int				y;
	char			ascii;
	struct tetris	*next;
}					p_list;

int				ft_open_rdly(char *file);
int				ft_readnly(int fd, char *dst, size_t size);
int				ft_close(int fd);
int				ft_endline(char const *str);
void			ft_error(void);
void			ft_replace_sharp(char **piece, size_t rank);
char			**ft_map_piece(size_t l, char const *str);
void			ft_get_piece(p_list **list, char *buf, size_t len);
void			ft_print_board(char **tab);
p_list			*ft_create_elmt(char const *content, int count);
void			ft_push_elmt_back(p_list **begin_list, p_list *new);
void			ft_init_list(p_list **list);
void			ft_print_list(p_list *list);
size_t			ft_lstlen(p_list *begin_list);
p_list			*ft_list_last(p_list *begin_list);
void			ft_list_push_back(p_list **begin_list, char const *str, int count);
void			ft_list_push_front(p_list **begin_list, char const *str);
int				ft_lstcmp(char **piece1, char **piece2);
p_list			*ft_identify(p_list **new, p_list **index, p_list *sort);
p_list			*ft_partcmp(p_list *new, p_list *index);
void			ft_first_c_inmap(char **map, size_t *i, size_t *j, char c);
void			ft_open_create(char *file_name, char *content);
void			ft_init_file(void);
p_list			*ft_elmtcpy(p_list *list);
char			**ft_mapcpy(char **tab);
int				ft_check(char *buf);
int				check_map(char *buf);
int				check_char(char *buf);
int				check_line(char *buf, int index);
char			**init_map(int sqtall, char **map);
void			resolution(p_list *tetri, int sqtall);
char			**ft_print_in_map(char **map, int xm, int ym, p_list *tetri);
int				trytoprint(char **map, p_list *tetri, int sqtall, int xt, int yt);
void			ft_printandquit(char **map);
char			**update_map(int sqtall, char ascii, char **map);
void			ft_recur_resolution(int sqtall, char **map, p_list *tetri, p_list **begin_list);
int				ft_min_sqtall(p_list *tetri);
void			find_sqtall(p_list *tetri);
p_list			*reinit_tetri(p_list *tetri);
p_list			*prev_tetri(char c, p_list **begin_list);

#endif
