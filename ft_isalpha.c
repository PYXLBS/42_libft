/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:04:30 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/11 16:12:37 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", isalpha('a'));
	return (0);
}
