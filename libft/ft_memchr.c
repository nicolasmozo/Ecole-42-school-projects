/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:22:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/23 21:35:59 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*
// finds first ocurrence of c into s for n bytes and return pointer to it
#include <stdio.h>
#include <string.h>
int main()
{
	//int i = 0;
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	//char c = 'c';
	//printf("%p\n",ft_memchr(s,c,15));
	//printf("%p\n",memchr(s,c,15));
	//printf("%p\n",&s[2]);
	//printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	printf("%s", (char *)memchr(tab, -1, 7));
}
*/
