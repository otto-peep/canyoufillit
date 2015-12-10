/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:46:29 by pconin            #+#    #+#             */
/*   Updated: 2015/12/04 19:05:33 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int a;
	int b;
	int len;

	a = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char *)s1);
	while (s1[a] != '\0')
	{
		b = 0;
		while (s2[b] == s1[b + a])
		{
			if (b == len - 1)
				return ((char *)&s1[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}
