/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:10:29 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:39:52 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
// checks wether c is a digit or an alpha number
#include <stdio.h>
#include <ctype.h>
int main(int ac, char **av)
{
	printf("%d\n", ft_isalnum(av[1][0]));
	printf("%d", isalnum(av[1][0]));
}*/