/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/24 16:56:26 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t b;
	size_t l;

	b = 0;
	l = 0;
	while (big[b] != '\0')
	{
		if (little[l] == '\0')
			return ((char *)big);
		while (len > b)
		{
			while (big[b + l] == little[l] && len > b + l)
			{
				if (little[l + 1] == '\0')
					return ((char *)&big[b]);
				l++;
			}
		b++;
		}
	}
	return (0);
}

/*
int	main(void)
{
	return (0);
}
*/