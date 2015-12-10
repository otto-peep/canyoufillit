/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:08:23 by pconin            #+#    #+#             */
/*   Updated: 2015/12/08 13:14:02 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	a;
	char	*dst;
	size_t	b;

	b = 0;
	dst = s1;
	a = ft_strlen(s1);
	while (s2[b] != '\0' && b < n)
	{
		dst[a] = s2[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (s1);
}
