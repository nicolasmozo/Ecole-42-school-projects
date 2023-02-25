/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:47:38 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/18 18:40:23 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tail(char const *str, char const *set)
{
	int	i;
	int	len;

	len = ft_strlen(str) - 1;
	i = 0;
	while (*str)
	{
		if (str[len] == set[i] && set[i] != 0)
		{
			len--;
			i = 0;
		}
		else if (set[i] == 0)
			break ;
		else
			i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (*s1)
	{
		if (*s1 == set[i] && set[i] != 0)
		{
			s1++;
			i = 0;
		}
		else if (set[i] == 0)
			break ;
		else
			i++;
	}
	return (ft_substr(s1, 0, tail(s1, set) + 1));
}
/*
// trims a string removing from the head and tail whatever 
// character is passed in set

// logic behind here is goes thru every c in the str
// and checks set[0] if not, set[1] 
// and so on until NULL and breaks - reboots in every iteration (i)
#include <stdio.h>
int main()
{
	char uno[] = "+   hola";
	char set[] = "";
	printf(":%s:",ft_strtrim(uno,set));
	//printf("\n%p\n",&uno[5]);
}*/