/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:58:45 by pabertha          #+#    #+#             */
/*   Updated: 2023/06/22 20:14:45 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	o;

	o = 0;
	if (c == 0)
	{
		ft_bzero(s, n);
		return (s);
	}
	while (n > o)
	{
		((unsigned char *)s)[o] = (unsigned char)c;
		o++;
	}
	return (s);
}
