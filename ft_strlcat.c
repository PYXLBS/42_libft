/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/24 00:19:47 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] != '\0' && size > d)
		d++;
	while (src[s] != '\0')
	{
		if (size > d + s + 1)
			dst[d + s] = src[s];
		s++;
	}
	if (size > d)
		dst[d + s] = '\0';
	return (d + s);
}

/*
int main(void)
{
    ft_strlcat()
    return 0;
}
*/