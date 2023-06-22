/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:17:08 by pabertha          #+#    #+#             */
/*   Updated: 2023/06/22 17:30:12 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(int ws)
{
	return ((ws > 8 && ws < 14) || ws == 32);
}

static int	is_positive(int pos)
{
	return (pos == 43);
}

static int	is_negative(int neg)
{
	return (neg == 45);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	symb;
	int	res;

	i = 0;
	symb = 1;
	res = 0;
	while (nptr[i] != '\0')
	{
		while (is_whitespace(nptr[i]))
			i++;
		if (is_positive(nptr[i]) || is_negative(nptr[i]))
		{
			if (is_negative(nptr[i]))
				symb = -symb;
			i++;
		}
		while (ft_isdigit(nptr[i]))
		{
			res = (res * 10) + (nptr[i] - 48);
			i++;
		}
		return (symb * res);
	}
	return (0);
}
