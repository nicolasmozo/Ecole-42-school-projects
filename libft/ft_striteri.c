/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:56:42 by omozo-av          #+#    #+#             */
/*   Updated: 2022/11/21 21:34:19 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}
/* 
#include <stdio.h>
char *test(unsigned int i, char *s)
{   
	// this test makes a copy of s until i passed. 
	//Remember that *s moves one each iteration from ft_striteri
	// compile with gcc, ifnore warnings to test
	char *tab = malloc(sizeof(char) * ft_strlen(s));
	unsigned int j = 0;
	while(j < i)
	{
		tab[j] = s[j];
		j++;
	}
	return printf("%s",tab);
}
int main()
{
	char uno[] = "nicolas";
	char *ptr;
	ptr = uno;
	ft_striteri(uno, test);
}
*/