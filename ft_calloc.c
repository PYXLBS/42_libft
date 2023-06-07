/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/06/06 23:19:15 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	c;

	c = nmemb * size;
	if (size != 0 && nmemb > (SIZE_MAX / size))
		return NULL;
	if (size == 0 || c == 0)
		s = malloc(1);
	else
		s = malloc(c);
	if (s == NULL)
		return (NULL);
	while (c > 0)
	{
		c--;
		((char *)s)[c] = 0;
	}
	return (s);
}
