/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:10:56 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 19:58:32 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
// checks if printable character
#include <ctype.h>
#include <stdio.h>
int main(int ac, char **av)
{
	printf("%d\n", ft_isprint(av[1][0]));
	printf("%d", isprint(av[1][0]));
}*/