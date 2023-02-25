/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:56 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/26 19:13:37 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	cast_c;

	cast_c = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == cast_c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
// finds last occurrence of arg passed in the string. returns address of it. 
// can also locate '\0'
#include <string.h>
int main()
{
	char s[] = "tripouille";
	char *d1 = ft_strrchr(s, 't' + 256); 
	char *d2 = strrchr(s, 't' + 256);
	printf("%p\n %p", d1, d2);
	//printf("%p", &s[0]);
	//int i = 0;
	//while(s[i])
	//	printf("adress %p\n", &s[i++]);
	
}
*/
