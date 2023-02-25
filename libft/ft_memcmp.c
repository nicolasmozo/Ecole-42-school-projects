/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:27:13 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/23 21:55:36 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	if (!s1 || !s2 || !n)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1 && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
/*
// compares two strings and return subtraction 
// of their ascii number if difference
#include <string.h>
#include <stdio.h>
int main()
{
	//char s1[] = "nl";
	//char s2[] = "n";

	printf("%d\n", memcmp("","abcdefgxyz",0));
	printf("%d\n", ft_memcmp("","abcdefgxyz",0));
	//printf("%d\n", ft_memcmp(s1,s2,0));
	//printf("%d\n", 'o' - 'h');
}
*/
