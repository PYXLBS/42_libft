/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:20:59 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/03 12:35:58 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stddef.h>

size_t ft_strlen(const char *s)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
        i++;
    return(i);
}

#include <string.h>
#include <stdio.h>

int main()
{
    printf("%ld\n", ft_strlen("abcde"));
    printf("%ld\n", strlen("abcde"));
    return(0);
}