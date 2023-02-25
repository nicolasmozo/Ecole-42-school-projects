/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:12:11 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:15:17 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
// converts a char from lower to upper case 
#include <ctype.h>
#include <stdio.h>
int main()
{
	char c;
	printf("%c", ft_toupper(c));
}*/