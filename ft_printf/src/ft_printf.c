/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:11:13 by omozo-av          #+#    #+#             */
/*   Updated: 2023/01/11 19:44:21 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	print_string(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	printf_aux(const char *fmt, va_list args)
{
	int	counter;

	counter = 0;
	if (*fmt == 'c')
		counter += ft_putchar(va_arg(args, int));
	else if (*fmt == 's')
		counter += print_string(va_arg(args, char *));
	else if (*fmt == 'p')
		counter += print_pointer(va_arg(args, unsigned long long));
	else if (*fmt == 'd' || *fmt == 'i')
		counter += print_integer(va_arg(args, int));
	else if (*fmt == 'u')
		counter += print_unsigned(va_arg(args, unsigned int));
	else if (*fmt == 'x' || *fmt == 'X')
		counter += print_hexadecimal(va_arg(args, unsigned int),*fmt);
	else if (*fmt == '%')
		counter += ft_putchar('%');
	return (counter);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		counter;

	va_start(args, fmt);
	counter = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			counter += printf_aux(fmt, args);
		}
		else
			counter += ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return (counter);
}
/*
#include <stdio.h>

int main()
{
	//ft_printf("%c%s%p%d%i%u%x%X%", 'a', "ass", 2, 3, 2.2, 3.3);
	// int x = 42;
	// unsigned int a = 6;
	
	//ft_printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%", 
	'a',"hola",&x,42,1,a,12,12,"%");
	//printf("\n---------------\n");
	//printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X", 
	'a',"hola",&x,42,1,a,12,12,"%%");
	ft_printf(" :%c: ", '0');
	//printf(" :%c: ", '0');
	//cspdiuxX%
}
*/