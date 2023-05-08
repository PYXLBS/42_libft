/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:57:55 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/08 18:38:55 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
	return (0);
}
