/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:28:57 by pconin            #+#    #+#             */
/*   Updated: 2015/12/04 19:11:06 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	a = 0;
	if (n == 0)
		return (0);
	while (*b1 && *b2)
	{
		if (*b1 != *b2)
			break ;
		if (a == n - 1)
			break ;
		b1++;
		b2++;
		a++;
	}
	return (*b1 - *b2);
}
