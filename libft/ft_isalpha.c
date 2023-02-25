/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:10:37 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/24 18:13:45 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
/*
// checks if str is an alpha character
#include <stdio.h>
#include <ctype.h>
int main(int ac, char** av)
{
    printf("%d\n", ft_isalpha(av[1][0]));
    printf("%d",isalpha(av[1][0]));
}*/