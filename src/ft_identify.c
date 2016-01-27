/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:46:40 by banthony          #+#    #+#             */
/*   Updated: 2016/01/24 18:31:51 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int		ft_inter(t_list **sort, t_list *new, t_list *index, int rank)
{
	t_list *tmp;

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

t_list	*ft_identify(t_list **new, t_list **index, t_list *sort)
{
	t_list	*memnew;
	t_list	*memindex;
	int		nb;
	int		rank;

	rank = 0;
	nb = 0;
	memnew = *new;
	memindex = *index;
	while (*new)
	{
		while (*index)
		{
			if (ft_inter(&sort, *new, *index, rank))
				break ;
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
