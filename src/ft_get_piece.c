/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 18:35:52 by pconin            #+#    #+#             */
/*   Updated: 2016/01/04 18:48:50 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

p_list	*ft_create_elmt(char const *content, int count)
{
	p_list	*new;

	if (content)
	{
		new = NULL;
		new = (p_list *)malloc(sizeof(p_list));
		if (new == NULL)
			return (NULL);
		new->piece = ft_map_piece(nb_l, content);
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

void	ft_list_push_back(p_list **begin_list, char const *str, int count)
{
	p_list *new;
	p_list *memory;

	memory = (*begin_list);
	while ((*begin_list)->next != NULL)
	{
		*begin_list = (*begin_list)->next;
	}
	new = ft_create_elmt(str, count);
	(*begin_list)->next = new;
	*begin_list = &(*memory);
}

void	ft_get_piece(p_list **list, char *buf, size_t len)
{
	size_t start;
	size_t shift;
	size_t count;
	size_t i;

	start = 0;
	i = 1;
	shift = 21;
	*list = ft_create_elmt(&buf[start], -30);
	(*list)->next = NULL;
	start = start + shift;
	count = len / shift;
	while (i != count)
	{
		ft_list_push_back(list, &buf[start], -30);
		start = start + shift;
		i++;
	}
}
