/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:50:42 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/19 15:08:05 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", isprint('a'));
	return (0);
}
