/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:17:08 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/19 17:25:04 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	d;
	int	e;

	c = 0;
	d = 1;
	e = 0;
	while (nptr[c] != '\0')
	{
		while ((nptr[c] > 8 && nptr[c] < 14) || (nptr[c] == 32))
			c++;
		if (nptr[c] == 43 || nptr[c] == 45)
		{
			if (nptr[c] == 45)
				d = -d;
			c++;
		}
		while (nptr[c] > 47 && nptr[c] < 58)
		{
			e = (e * 10) + (nptr[c] - 48);
			c++;
		}
		return (d * e);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("---+--+1234ab567"));
	printf("%d\n", ft_atoi("-+1234ab567"));
	printf("%d\n", ft_atoi("+1234ab567"));
	printf("%d\n", ft_atoi("++1234ab567"));
	printf("%d\n", ft_atoi("1234ab567"));
	printf("%d\n", ft_atoi("qwerty1234ab567"));
	printf("%s\n", " ");
	printf("%d\n", atoi(" ---+--+1234ab567"));
	printf("%d\n", atoi("---+--+1234ab567"));
	printf("%d\n", atoi("-+1234ab567"));
	printf("%d\n", atoi("+1234ab567"));
	printf("%d\n", atoi("++1234ab567"));
	printf("%d\n", atoi("1234ab567"));
	printf("%d\n", atoi("qwerty1234ab567"));
	return (0);
}
