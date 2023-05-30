/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:25:57 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/30 17:18:09 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*s3;

	i1 = 0;
	i2 = 0;
	s3 = (char *)malloc(i1 + i2 + 1);
	if (s3 == NULL)
		return (NULL);
	while (s1[i1] != '\0')
	{
		s3[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		s3[i1] = s2[i2];
		i1++;
		i2++;
	}
	return (s3);
}
