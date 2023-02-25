/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:43:00 by omozo-av          #+#    #+#             */
/*   Updated: 2023/01/11 19:33:19 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	print_integer(int n)
{
	int		len;
	char	*integer;
	
	len = 0;
	integer = ft_itoa(n);
	len = print_string(integer);
	free(integer);
	return (len);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_unsigned(unsigned int n)
{
	char	digits[32];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		digits[i++] = n % 10 + '0';
		n /= 10;
	}
	j = i;
	while (i > 0)
		write(1, &digits[--i], 1);
	return (j);
}

int	print_hexadecimal(unsigned int unum, char fmt)
{
	char	digits[32];
	int		digit;
	int		i;

	if (unum == 0)
		return (ft_putchar('0'));
	i = 0;
	while (unum > 0)
	{
		digit = unum % 16;
		if (digit < 10)
			digits[i++] = digit + '0';
		else
		{
			if (fmt == 'X')
				digits[i++] = ft_toupper(digit - 10 + 'a');
			else
				digits[i++] = digit - 10 + 'a';
		}
		unum /= 16;
	}
	digit = i;
	while (i > 0)
		write(1, &digits[--i], 1);
	return (digit);
}
