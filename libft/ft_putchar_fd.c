/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:34:40 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/21 22:57:24 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
// pases a char into an output fd - see how to set up a fd below. 
// Use CREAT to create the file if non existant, 
//not sure how to make it work with OPEN
// to test it, gcc and then .a.out
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int file = creat("1.txt",0644);
	char c = 'b';
	ft_putchar_fd(c,file);
}
*/