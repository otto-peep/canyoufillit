/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfillit.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 18:23:09 by pconin            #+#    #+#             */
/*   Updated: 2015/12/10 18:38:14 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILLIT_H

# define HEADERFILLIT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <fcntl.h>

typedef struct s_list
{
	char			**tetri;
	struct s_list	*next;
}				t_tri;

int		ft_error(void);
L

#endif
