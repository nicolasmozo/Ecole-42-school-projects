/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:28 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/26 20:43:48 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (!dstsize)
		return (len_s);
	while (src[i] && (len_d + i < dstsize - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = 0;
	if (len_d > dstsize)
		return (len_s + dstsize);
	return (len_s + len_d);
}
/*
// appends dstsize values of src at the end of dst - 
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int main()
{
	
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	
	printf("%ld\n", ft_strlcat(dest,src,0));
	//printf("%ld", strlcat(dest,src,1));
}
*/