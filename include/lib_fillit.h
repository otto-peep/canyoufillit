/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_fillit.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 09:37:33 by banthony          #+#    #+#             */
/*   Updated: 2016/01/24 18:25:12 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FILLIT_H
# define LIB_FILLIT_H
# include <string.h>

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
# define SQUARE	"##..\n##..\n....\n....\n"
# define ZD1	"##..\n.##.\n....\n....\n"
# define ZD2	".#..\n##..\n#...\n....\n"
# define NB_L	4
# define BUF_SIZE 4096

typedef struct	s_tetris
{
	char			**piece;
	int				x;
	int				y;
	char			ascii;
	struct s_tetris	*next;
}				t_list;

int				ft_open_rdly(char *file);
int				ft_readnly(int fd, char *dst, size_t size);
int				ft_close(int fd);
int				ft_endline(char const *str);
void			ft_error(void);
void			ft_replace_sharp(char **piece, size_t rank);
char			**ft_map_piece(size_t l, char const *str);
void			ft_get_piece(t_list **list, char *buf, size_t len);
void			ft_print_board(char **tab);
t_list			*ft_create_elmt(char const *content, int count);
void			ft_push_elmt_back(t_list **begin_list, t_list *new);
void			ft_init_list(t_list **list);
size_t			ft_lstlen(t_list *begin_list);
void			ft_list_push_back(t_list **bgn_lst, char const *str, int count);
void			ft_list_push_front(t_list **begin_list, char const *str);
t_list			*ft_identify(t_list **new, t_list **index, t_list *sort);
t_list			*ft_partcmp(t_list *new, t_list *index);
void			ft_resolve2(int sqtall, t_list **tetri, char **map, int bool);
void			ft_first_c_inmap(char **map, int *i, int *j, char c);
t_list			*ft_elmtcpy(t_list *list);
char			**ft_mapcpy(char **tab);
int				ft_check(char *buf);
int				check_map(char *buf);
int				check_char(char *buf);
int				check_line(char *buf, int index);
char			**init_map(int sqtall, char **map);
char			**ft_print_in_map(char **map, int xm, int ym, t_list *tetri);
int				trytoprint2(char **map, t_list *tetri, int xm, int ym);
void			ft_printandquit(char **map);
void			update_map(int sqtall, char **map, t_list *memory, int *bool);
int				ft_min_sqtall(t_list *tetri);
t_list			*reinit_tetri(t_list *tetri);
t_list			*prev_tetri(char c, t_list **begin_list);
void			ft_increase_map(char **map, int *sqtall);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s1);
void			*ft_memalloc(size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putnbr(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
char			*ft_strcpy(char *dst, const char *src);
size_t			ft_strlen(const char *s);
char			*ft_treatment(char *file, t_list **index);
int				trytoprint(char **map, t_list *tetri, int sqtall);
void			tetrizero(t_list *memory);

#endif
