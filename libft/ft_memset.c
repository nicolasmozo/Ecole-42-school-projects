/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:11:10 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/16 19:32:19 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
// copies len times of c into str
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	int i = 0;
	char str[20] = "cccccjjjjjjjjjj";
	char str2[20] = "cccccjjjjjjjjjj";

	ft_memset(str, '.', 5 * sizeof(char));
	memset(str2, '.', 5 * sizeof(char));
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("%c", '\n');
	
	i = 0;
	while (str2[i])
	{
		printf("%c", str2[i]);
		i++;
	}
}
*/