/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:23 by pabertha          #+#    #+#             */
/*   Updated: 2023/06/22 17:51:13 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start( char const *s1, char const *set, int *i)
{
	int	start;

	start = 0;
	while (s1[start] != '\0')
	{
		*i = 0;
		while (set[*i] != '\0' && set[*i] != s1[start])
			(*i)++;
		if (set[*i] == '\0')
			break ;
		else
			start++;
	}
	return (start);
}

static int	get_end(char const *s1, char const *set, int start, int i)
{
	int	end;

	end = 0;
	while (s1[end] != '\0')
		end++;
	end--;
	while (start <= end)
	{
		i = 0;
		while (set[i] != '\0' && set[i] != s1[end])
			i++;
		if (set[i] == '\0')
			break ;
		else
			end--;
	}
	return (end);
}

static char	*get_result(char const *s1, int start, int end)
{
	char	*res;
	int		i;

	res = (char *)malloc(end - start + 2);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	start = get_start(s1, set, &i);
	end = get_end(s1, set, start, i);
	res = get_result(s1, start, end);
	return (res);
}
