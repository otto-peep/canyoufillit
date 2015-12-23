/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfillit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:36:23 by pconin            #+#    #+#             */
/*   Updated: 2015/12/23 18:59:11 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILLIT_H

# define HEADERFILLIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_lst
{
		char			**tetri;
			struct s_list	*next;
}				t_tri;

void	error(int a);
int		check_line(char *buf, int index);
int		check_char(char *buf);
int		check_map(char *buf);
int		ft_check(char *buf);

#endif
