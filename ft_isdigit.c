/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:39:57 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/02 18:42:38 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (c);
    else
        return (0);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isdigit('5'));
    printf("%d\n", isdigit('5'));
    return (0);
}