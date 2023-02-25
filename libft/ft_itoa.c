/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:15:35 by omozo-av          #+#    #+#             */
/*   Updated: 2022/12/01 17:36:24 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = (unsigned int) n * -1;
	}
	while ((unsigned int)n > 0)
	{
		n = (unsigned int) n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;

	len = count_digits(n);
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (0);
	itoa[len] = '\0';
	len--;
	if (n == 0)
		itoa[0] = '0';
	if (n < 0)
	{
		itoa[0] = '-';
		n *= -1;
	}
	while ((unsigned int)n > 0)
	{
		itoa[len] = ((unsigned int)n % 10) + '0';
		n = (unsigned int) n / 10;
		len--;
	}
	return (itoa);
}

/*
// receives an int and converts it into a char  (returns a pointer)
#include <stdio.h>
#include <math.h>
int main()
{   
	int uno = 222;
	printf("%s",ft_itoa(uno));
}
*/
