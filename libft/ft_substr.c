/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:06:17 by omozo-av          #+#    #+#             */
/*   Updated: 2022/12/01 20:11:27 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!(sub))
		return (0);
	i = 0;
	while (i < len && s[start])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
/*
// gets a subsstring of s from start to len bytes
#include <stdio.h>
#include <string.h>
int main()
{
	//char *str = strdup("sentence");
	char *ptr;
	ptr = ft_substr("tripouille", 100, 1); 
	printf("%s", ptr);
	free(ptr);
	
}
*/