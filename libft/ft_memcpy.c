/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:00 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/27 13:57:47 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
// copies n bytes from src to dst 
// doesnt care about overlapping, check memmove for that
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char  tofill[100];
	char src[] = {0,0};
	i++;
	printf("%p\n",ft_memcpy(tofill,src,2));
	printf("%p",&tofill[0]);	
	i = 0;
		while(tofill[i])
	{
		printf(":%c:",[i]);
		i++;
	}
	char dest[100];
	memset(dest, 'A', 100);
	ft_memcpy(dest, "coucou", 0);
	/// check(dest[0] == 'A'); showLeaks();
	char *rtn = (char *)ft_memcpy(dest, NULL, 0);
	printf("%s\n", dest);
	printf("%s", rtn);
	
	//  check(rtn == dest && dest[0] == 'A'); showLeaks();
}

*/