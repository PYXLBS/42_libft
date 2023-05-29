/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:17:08 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/29 15:21:32 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (nptr[i] != '\0')
	{
		while ((nptr[i] > 8 && nptr[i] < 14) || (nptr[i] == 32))
			i++;
		if (nptr[i] == 43)
			i++;
		else if (nptr[i] == 45)
		{
			j = -j;
			i++;
		}
		while (nptr[i] > 47 && nptr[i] < 58)
		{
			k = (k * 10) + (nptr[i] - 48);
			i++;
		}
		return (j * k);
	}
	return (0);
}
