/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:34 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 23:34:36 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
/*
// copies src into dst until dstsize passed. returns len of src
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

// for why the -1 in the loop, check rules in the man 
int main()
{

	
	char src[10] = "nicolas";
	char dst[10] = "hol";
	//size_t size = sizeof(src);

	//printf("%zu\n",ft_strlcpy(dst,src,5));
	printf("-%zu-",strlcpy(dst,src,5));
	
	int i = 0;
	while(dst[i])
	{
		printf(":%c:", dst[i]);
		i++;
	}
	
	char *str = "BBBB";
	char buff1[0xF00];
	char buff2[0xF00];

	memset(buff1, 'A', 20);
	memset(buff2, 'A', 20);
	printf("normal size%ld\n", strlcpy(buff1, str, sizeof(buff1)));
	printf("my size %ld\n",ft_strlcpy(buff2, str, sizeof(buff2)));

	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00];
	char buff2[0xF00];

	memset(buff1, 'A', sizeof(buff1) - 1);
	memset(buff2, 'A', sizeof(buff2) - 1);
	buff1[sizeof(buff1) - 1] = 0;
	buff2[sizeof(buff1) - 1] = 0;
	//strlcpy(buff1, str, 0);
	ft_strlcpy(buff2, str, 0);
	
	printf("%s\n size %lu", buff1, sizeof(buff1));
	printf("%s size %lu", buff2, sizeof(buff2));
}
*/