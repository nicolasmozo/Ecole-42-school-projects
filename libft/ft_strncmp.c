/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:09:10 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/27 18:33:32 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((i < n - 1) && s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
//compares two strings and return the 
//subtraction of the ascii numbers
#include <string.h>
#include <stdio.h>
int main()
{
	
	char s1[] = "nicolas";
	char s2[] = "nicolas";

	printf(":%d:\n", strncmp(s1,s2,7));
	printf("-%d-\n", ft_strncmp(s1,s2,7));
	
	char *s1 = "abcdef";
	char *s2 = "abcdefghijklmnop";
	//size_t size = strlen("the cake is a lie !\0I'm hidden lol\r\n");
	int i1 = ((strncmp(s1, s2, 6) > 0) ? 1 : 
	((strncmp(s1, s2, 6) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, 6) > 0) ? 1 : 
	((ft_strncmp(s1, s2, 6) < 0) ? -1 : 0));
	printf("normall is %d and ft_ is %d", i1, i2);
	

	int i1	= ft_strncmp("", "1", 0);
	int i2	= strncmp("", "1", 0);
	printf("%d\n %d", i1,i2);
}
*/