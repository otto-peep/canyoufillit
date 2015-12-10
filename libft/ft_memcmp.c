/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:40:25 by pconin            #+#    #+#             */
/*   Updated: 2015/12/07 14:36:27 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			count;

	count = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (count + 1 < n && (c1[count] == c2[count]))
		count++;
	return (c1[count] - c2[count]);
}
