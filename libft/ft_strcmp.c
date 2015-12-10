/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:33:30 by pconin            #+#    #+#             */
/*   Updated: 2015/12/04 19:07:03 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int				a;
	unsigned char	*b1;
	unsigned char	*b2;

	a = 0;
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	while (b1[a] == b2[a] && b1[a] && b2[a])
		a++;
	if (b1[a] == '\0' && b2[a] == '\0')
		return (0);
	else
		return (b1[a] - b2[a]);
}
