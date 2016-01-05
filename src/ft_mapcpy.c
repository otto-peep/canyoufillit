/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <banthony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 14:09:43 by banthony          #+#    #+#             */
/*   Updated: 2015/12/31 14:22:10 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include "lib_fillit.h"

char	**ft_mapcpy(char **tab)
{
	int i;
	char **tabcp;

	i = 0;
	tabcp = NULL;
	if (!(tabcp = (char **)malloc(sizeof(char *) *nb_l + 1)))
		return (NULL);
	while (i < nb_l)
	{
		if (!(tabcp[i] = ft_strdup(tab[i])))
			return (NULL);
		i++;
	}
	tabcp[nb_l] = NULL;
	return (tabcp);
}
