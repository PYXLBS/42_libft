/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:23 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/29 15:19:18 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		z;
	int		i;
	int		j;
	char	*s2;

	a = 0;
	z = 0;
	i = 0;
	j = a;
	s2 = (char *)malloc(z - a + 2);
	if (s2 == NULL)
		return (0);
	while (s1[a] != '\0')
	{
		while (set[i] != '\0' && set[i] != s1[a])
			i++;
		if (set[i] == '\0')
			a++;
		else
			a--;
		a++;
	}
	while (s1[z] != '\0')
		z++;
	z--;
	while (a <= z)
	{
		i = 0;
		while (set[i] != '\0' && set[i] != s1[z])
			i++;
		if (set[i] == '\0')
			z--;
		else
			z++;
		z--;
	}
	while (z >= j)
	{
		s2[i] = s1[j];
		i++;
		j++;
	}
	return (s2);
}
