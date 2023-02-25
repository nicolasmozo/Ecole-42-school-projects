/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:01:29 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/20 17:40:01 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	map = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!map || !s || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		map[i] = f (i, s[i]);
		i++;
	}
	map[i] = (0);
	return (map);
}
/*
// takes a string, and then a fuction that returns a pointer char. 
// does whatever the fuction passed does. The function should have as params, 
// UNSIGNED INT, CHAR
#include <stdio.h>
char test(unsigned int i, char c)
{
	return c + i;
}
int main()
{
	char uno[] = "nicolas";
	printf("%s", ft_strmapi(uno,test));
}
*/
