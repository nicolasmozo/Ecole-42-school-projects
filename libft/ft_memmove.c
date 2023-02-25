/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:05 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 21:31:35 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	dif;

	if (dst == 0 || src == 0)
		return (0);
	dif = (((char *)dst) - ((char *)src));
	if (dif >= len)
		ft_memcpy(dst, (void *)src, len);
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	return ((char *)dst);
}
/*

// copies len bytes from src to dst. 
// similar to memcpy thing that changes here is that if overlap of addresses, 
// does it backwards
#include <stdio.h>
#include <string.h>
int main()
{
	//char h[20] = "nicol";
	//ft_memmove(&h[2], h, 3);

	//int i = 0;
	//while (i < sizeof(h))
	//{
	//	printf("-%c-", h[i]);
	//	i++;
	//}
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	int size = strlen(src);
	char *r1;
	char *r2;
	//char *r1 = memmove(dst1, src, size);
	//char *r2 = ft_memmove(dst1, src, size);
	//r1 = memmove("", "" - 1, 0);
	//r2 = ft_memmove("", "" - 1, 0);
	//printf("normal %p\n",r1);
	//printf("ft_ %p",r2);
	ft_memmove(((void*)0), ((void*)0), 5);
	//memmove(((void*)0), ((void*)0), 5);
}
*/
