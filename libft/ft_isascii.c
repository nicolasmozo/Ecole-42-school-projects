/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:10:42 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:38:59 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 0177)
		return (1);
	return (0);
}
/*
//checks if ascii character
#include <stdio.h>
int main(int ac, char **av)
#include <ctype.h>
{
	printf("%d\n",ft_isascii(av[1][0]));
	printf("%d",isascii(av[1][0]));
}*/