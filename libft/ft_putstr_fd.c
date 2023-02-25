/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:58:05 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/21 23:10:29 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
}
/*
// copies string s into a fd output // more info check ft_putchar.fd.c comments
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd = creat("1.txt",0644);
	char str[] = "nicolas";
	ft_putstr_fd(str, fd);
}
*/