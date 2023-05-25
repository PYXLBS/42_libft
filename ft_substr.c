/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:29:30 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/25 13:33:37 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(len + 1);
	if (str == NULL)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		if (s[start + len] == '\0')
			str[len] = '\0';
		else
			str[len] = s[start + len];
	}
	return (str);
}

/*
int	main(void)
{
	return (0);
}
*/