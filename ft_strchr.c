/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/21 11:21:56 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	d;
	
	d = 0;
	while (s[d] != '\0')
	{
		if (s[d] == (char)c)
			return ((char *)&s[d]);
		d++;
	}
	if (s[d] == '\0')
		return ((char *)&s[d]);
	return (0);
}

/*
int main(void)
{
	ft_strchr();
	return (0);
}
*/