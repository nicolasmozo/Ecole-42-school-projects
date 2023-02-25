/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:58:05 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/21 23:29:58 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
}
/*
// copies int into a fd output // more info check ft_putchar.fd.c comments
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd = creat("1.txt",0644);
	int uno = 12345;
	ft_putnbr_fd(uno, fd);
}
*/
