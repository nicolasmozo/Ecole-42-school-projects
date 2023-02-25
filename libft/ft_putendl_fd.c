/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 23:12:00 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/21 23:16:18 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}
/*
// copies string s into a fd output, same as ft_putstr_fd
// but this one wiht a new line
// more info check ft_putchar.fd.c comments
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd = creat("1.txt",0644);
	char str[] = "nicolas";
	ft_putendl_fd(str, fd);
}
*/
