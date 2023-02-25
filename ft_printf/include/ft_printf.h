/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:35:52 by omozo-av          #+#    #+#             */
/*   Updated: 2023/01/11 19:54:21 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
int		print_integer(int n);
void	ft_putstr(char *str);
int		print_string(char *s);
int		ft_putchar(int c);
void	ft_print_pointer(uintptr_t num);
int		print_pointer(unsigned long long p);
int		print_unsigned(unsigned int n);
int		print_hexadecimal(unsigned int unum, char c);
int		get_pointer_length(uintptr_t p);

#endif
// Norminette: -R CheckDefine 