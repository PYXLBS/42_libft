/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:50:42 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/08 18:22:05 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", isprint('a'));
	return (0);
}
