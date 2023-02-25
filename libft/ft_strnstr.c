/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:24:50 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/15 22:19:56 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return (ptr = (char *)&haystack[0]);
	while (haystack[i] && (i < len))
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return (ptr = (char *)&haystack[i - (j - 1)]);
		}
		i++;
	}
	return (0);
}
/* 
//returns address of sr2 within sr1.  checks that the whole sr2 is in there first
//before returning // returns j - 1 bc needle[j] counts until null
#include <stdio.h>
#include <string.h>
int main()
{
	char sr1[] = " nicolau";
	char sr2[] = " ";
	printf("%p\n", strnstr(sr1,sr2,7));
	printf("%p\n", ft_strnstr(sr1,sr2,7));
	printf("%p\n", &sr1[2]); 
}*/
