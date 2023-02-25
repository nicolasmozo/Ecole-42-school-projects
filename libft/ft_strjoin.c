/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:53:58 by omozo-av          #+#    #+#             */
/*   Updated: 2022/12/01 20:10:17 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;

	i = 0;
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	join = malloc (((ft_strlen (s1) + ft_strlen (s2)) + 1) * sizeof(char));
	if (!(join))
		return (0);
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		join[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	join[ft_strlen(s1) + i] = 0;
	return (join);
}
/*
#include <stdio.h>
// concatenates s1 with s2, returns concatenated str
int main()
{
	char uno[] = "tripouille";
	char dos[] = "42";
	char *ptr = ft_strjoin(uno,dos);
	printf("%s", ptr);
	free(ptr);
}
*/