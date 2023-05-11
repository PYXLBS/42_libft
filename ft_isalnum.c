/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:45:37 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/11 16:12:34 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (c);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	return (0);
}
