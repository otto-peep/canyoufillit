/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:24:45 by pconin            #+#    #+#             */
/*   Updated: 2015/12/07 14:40:01 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	size_t			a;

	a = 0;
	c1 = (unsigned char)c;
	str = (unsigned char *)s;
	if (s)
	{
		while (a < n)
		{
			if (str[a] == c1)
				return ((void *)&str[a]);
			a++;
		}
	}
	return (NULL);
}
