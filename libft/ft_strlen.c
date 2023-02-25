/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:39 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/27 19:01:52 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
// counts string
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	//const char s = av[1][0];
	printf("%d\n", ft_strlen(&av[1][0]));
	printf("%lu\n", strlen(&av[1][0]));
}*/