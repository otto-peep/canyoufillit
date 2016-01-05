/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:46:40 by banthony          #+#    #+#             */
/*   Updated: 2016/01/04 15:47:28 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <stdlib.h>
#include "libft.h"

int		ft_inter(p_list **sort, p_list *new, p_list *index, int rank)
{
	p_list *tmp;

	tmp = NULL;
	if (*sort == NULL)
	{
		if (!(*sort = ft_elmtcpy(ft_partcmp(new, index))))
			return (0);
		(*sort)->next = NULL;
		ft_replace_sharp((*sort)->piece, rank);
		(*sort)->ascii = rank + 'A';
		return (1);
	}
	if (!(tmp = ft_elmtcpy(ft_partcmp(new, index))))
		return (0);
	ft_replace_sharp(tmp->piece, rank);
	tmp->ascii = rank + 'A';
	ft_push_elmt_back(sort, tmp);
	return (2);
}

p_list	*ft_identify(p_list **new, p_list **index, p_list *sort)
{
	p_list *memnew;
	p_list *memindex;
	int nb;
	int rank;

	rank = 0;
	nb = 0;
	memnew = *new;
	memindex = *index;
	while (*new)
	{
		while (*index)
		{
			nb = ft_inter(&sort, *new, *index, rank);
			if (nb)
				break;
			*index = (*index)->next;
		}
		*new = (*new)->next;
		*index = memindex;
		rank++;
	}
	*new = memnew;
	if (ft_lstlen(*new) != ft_lstlen(sort))
		ft_error();
	return (sort);
}









