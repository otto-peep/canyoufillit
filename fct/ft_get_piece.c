/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 18:35:52 by pconin            #+#    #+#             */
/*   Updated: 2015/12/25 12:43:44 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

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
	size_t	len;

	if (content)
	{
		new = NULL;
		new = (p_list *)malloc(sizeof(p_list));
		if (new == NULL)
			return (NULL);
		len = ft_strlen(content);
		new->piece = ft_map_piece(len, content);
		new->x = 0;
		new->y = 0;
		new->ascii = count + 97;
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
	*list = ft_create_elmt(&buf[start]);
	(*list)->next = NULL;
	start = start + shift;
	count = len / shift;
	while (i != count + 1)
	{
		ft_list_push_back(list, &buf[start], count);
		start = start + shift;
		i++;
	}
}
