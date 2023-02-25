/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:10:48 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 19:53:22 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	return (0);
}
/*
// checks if digic character
#include <stdio.h>
#include <ctype.h>
int main(int ac, char **av)
{
	printf("%d\n",ft_isdigit(av[1][0]));
	printf("%d",isdigit(av[1][0]));
}*/