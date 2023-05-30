/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:22 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/30 16:43:56 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		t;
	char	*u;

	t = 0;
	u = malloc(t + 1);
	if (u == NULL)
		return (NULL);
	while (s[t] != '\0')
	{
		u[t] = s[t];
		t++;
	}
	if (u[t] == '\0')
		return (u);
	return (0);
}
