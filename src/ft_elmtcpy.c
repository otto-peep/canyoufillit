/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elmtcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 23:31:51 by banthony          #+#    #+#             */
/*   Updated: 2016/01/24 18:30:07 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include <stdlib.h>

t_list	*ft_elmtcpy(t_list *list)
{
	t_list *new;

	new = NULL;
	if (list == NULL)
		return (NULL);
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->piece = ft_mapcpy(list->piece);
	new->x = 0;
	new->y = 0;
	new->ascii = '#';
	new->next = NULL;
	return (new);
}
