/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:15:15 by omozo-av          #+#    #+#             */
/*   Updated: 2023/01/11 19:48:51 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	get_pointer_length(uintptr_t p)
{
	int	i;

	i = 0;
	while (p != 0)
	{
		i++;
		p = p / 16;
	}
	return (i);
}

void	ft_print_pointer(uintptr_t num)
{
	if (num >= 16)
	{
		ft_print_pointer(num / 16);
		ft_print_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
			ft_putchar((num - 10 + 'a'));
	}
}

int	print_pointer(unsigned long long p)
{
	int	counter;

	counter = 0;
	counter += print_string("0x");
	if (p == 0)
		counter += write(1, "0", 1);
	else
	{
		ft_print_pointer(p);
		counter += get_pointer_length(p);
	}
	return (counter);
}
