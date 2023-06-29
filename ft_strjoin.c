/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:25:57 by pabertha          #+#    #+#             */
/*   Updated: 2023/06/29 22:23:01 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	char	*s3;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	s3 = malloc(i1 + i2 + 1);
	if (s3 == NULL)
		return (NULL);
	ft_memcpy(s3, s1, i1);
	ft_memcpy(s3 + i1, s2, i2);
	s3[i1 + i2] = '\0';
	return (s3);
}
