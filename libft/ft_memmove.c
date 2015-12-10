/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:06:53 by pconin            #+#    #+#             */
/*   Updated: 2015/12/08 12:19:05 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	temp = NULL;
	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	temp = (unsigned char *)ft_memalloc(n);
	if (temp == NULL)
		return (NULL);
	while (i < n)
	{
		temp[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str2[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
