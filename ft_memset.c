/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyxlbs <pyxlbs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:58:45 by pabertha          #+#    #+#             */
/*   Updated: 2023/05/25 19:08:37 by pyxlbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	o;

	o = 0;
	while (n > o)
	{
		s[o] = c;
		o++;		
	}
	return (s);
}

int main(void)
{
	char str1[50] = "This is a test string for memset function.";
	char str2[50] = "This is a test string for memset function.";
	
	printf("Original string 1: %s\n", str1);
	printf("Original string 2: %s\n\n", str2);

	ft_memset(str1, '$', 7);
	memset(str2, '$', 7);

	printf("String 1 after ft_memset: %s\n", str1);
	printf("String 2 after memset: %s\n", str2);
	
	return 0;
}

// int	main(void)
// {
// 	char tmp[10];
// 	char tmp2[10];
	
// 	int i = 0;
// 	while (i < 10)
// 	{
// 		tmp[i] = 'a';
// 		tmp2[i] = 'a';
// 		i++;	
// 	}

// 	tmp[9] = '\0';
// 	tmp2[9] = '\0';


// 	printf("%s\n\n", memset(tmp, 'W', 5));
// 	printf("%s\n\n", ft_memset(tmp2, 'O', 5));
// 	return (0);
// }

/*
int	main(void)
{
	ft_memset();
	return (0);
}
*/