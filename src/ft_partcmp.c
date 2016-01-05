/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 16:45:40 by banthony          #+#    #+#             */
/*   Updated: 2015/12/31 16:45:41 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "lib_fillit.h"
#include "libft.h"

p_list	*ft_partcmp(p_list *new, p_list *index)
{
	size_t i;
	size_t j;
	char **tnew;
	char **tindex;
	size_t i2;
	size_t j2;
	size_t count;

	i = 0;
	j = 0;
	i2 = 0;
	j2 = 0;
	count = 0;
	tnew = new->piece;
	tindex = index->piece;
	ft_first_c_inmap(tnew, &i2, &j2, '#');
	if (tindex[0][0] == '.' && j2 > 0)
		j2--;
	while (tindex[i])
	{
		while (tindex[i][j] == tnew[i2+i][j2+j])
		{
			if (tindex[i][j] == '#' && tnew[i2+i][j2+j] == '#')
				count++;
			if (tnew[i2+i][j2+j] == '\n')
				break;
			j++;
		}
		if (i2 + i >= 3)
			break;
		i++;
		j = 0;
	}
	if (count == 4)
		return (index);
	else
		return (NULL);
}

















