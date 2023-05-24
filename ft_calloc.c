/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/24 16:36:04 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	c;

	c = nmemb * size;
	if (c == 0)
		s = malloc(1);
	else
		s = malloc(c);
	if (s == NULL)
		return (0);
	while (c--)
		((char *)s)[c] = 0;
	return (s);
}

/*
int	main(void)
{
	ft_calloc();
	return (0);
}
*/