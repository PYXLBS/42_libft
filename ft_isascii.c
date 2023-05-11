/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:48:40 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/11 17:05:35 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (c);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", isascii('a'));
	return (0);
}
