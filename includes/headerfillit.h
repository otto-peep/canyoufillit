/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfillit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:36:23 by pconin            #+#    #+#             */
/*   Updated: 2015/12/11 12:59:08 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILLIT_H

# define HEADERFILLIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <fcntl.h>

typedef struct s_lst
{
		char			**tetri;
			struct s_list	*next;
}				t_tri;

int		ft_error(void);
int		check_map(char *buf);
int		check_char(char *buf);

#endif
