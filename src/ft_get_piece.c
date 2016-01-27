/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 18:35:52 by pconin            #+#    #+#             */
/*   Updated: 2016/01/13 13:00:06 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <stdlib.h>

int		ft_endline(char const *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i + 1);
		else
			i++;
	}
	return (0);
}

char	**ft_map_piece(size_t l, char const *str)
{
	size_t	i;
	size_t	n;
	char	**tab;

	i = 0;
	n = 0;
	tab = NULL;
	if (!(tab = (char **)malloc(sizeof(char *) * l + 1)))
		return (NULL);
	while (i < l)
	{
		if (!(tab[i] = ft_strsub(&str[n], 0, ft_endline(&str[n]))))
			return (NULL);
		i++;
		n = n + ft_endline(&str[n]);
	}
	tab[l] = NULL;
	return (tab);
}

t_list	*ft_create_elmt(char const *content, int count)
{
	t_list	*new;

	if (content)
	{
		new = NULL;
		new = (t_list *)malloc(sizeof(t_list));
		if (new == NULL)
			return (NULL);
		new->piece = ft_map_piece(NB_L, content);
		new->x = 0;
		new->y = 0;
		new->ascii = 'A' + count;
		if (new->piece == NULL)
			return (NULL);
		new->next = NULL;
		return (new);
	}
	return (NULL);
}

void	ft_list_push_back(t_list **bgn_lst, char const *str, int count)
{
	t_list *new;
	t_list *memory;

	memory = (*bgn_lst);
	while ((*bgn_lst)->next != NULL)
	{
		*bgn_lst = (*bgn_lst)->next;
	}
	new = ft_create_elmt(str, count);
	(*bgn_lst)->next = new;
	*bgn_lst = &(*memory);
}

void	ft_get_piece(t_list **list, char *buf, size_t len)
{
	size_t start;
	size_t count;
	size_t i;

	start = 0;
	i = 1;
	*list = ft_create_elmt(&buf[start], -30);
	(*list)->next = NULL;
	start = start + 21;
	count = len / 21;
	while (i != count + 1)
	{
		ft_list_push_back(list, &buf[start], -30);
		start = start + 21;
		i++;
	}
}
