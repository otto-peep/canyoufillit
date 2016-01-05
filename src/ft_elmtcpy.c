/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elmtcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 23:31:51 by banthony          #+#    #+#             */
/*   Updated: 2016/01/04 16:09:39 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"
#include "libft.h"
#include <stdlib.h>

p_list	*ft_elmtcpy(p_list *list)
{
	p_list *new;

	new = NULL;
	if (list == NULL)
		return (NULL);
	if (!(new = (p_list *)malloc(sizeof(p_list))))
		return (NULL);
	new->piece = ft_mapcpy(list->piece);
	new->x = 0;
	new->y = 0;
	new->ascii = '#';
	new->next = NULL;
	return (new);
}
