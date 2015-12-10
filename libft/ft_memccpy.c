/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:46:35 by pconin            #+#    #+#             */
/*   Updated: 2015/12/07 14:40:29 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	c1;

	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	c1 = (unsigned char)c;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == c1)
		{
			i++;
			return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}
