/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:57:55 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/03 16:03:41 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return(c);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", tolower('A'));
    return(0);
}