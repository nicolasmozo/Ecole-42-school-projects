/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omozo-av <omozo-av@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:10:01 by omozo-av          #+#    #+#             */
/*   Updated: 2022/12/01 20:02:26 by omozo-av         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			counter++;
		while (*s && *s != c)
			++s;
	}
	return (counter);
}

static void	*make_free(char **split, int j)
{
	while (split[j])
	{
		free (split[j]);
		split[j] = NULL;
		j--;
	}
	free (split);
	split = NULL;
	return (split);
}

static char	**make_split(char const *str, char c, char **split)
{
	int				j;
	char const		*temp;

	j = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		temp = str;
		while (*temp && *temp != c)
			temp++;
		if (*temp == c || temp > str)
		{
			split[j] = ft_substr(str, 0, temp - str);
			if (!split[j])
				make_free(split, j);
			str = temp;
			j++;
		}
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *str, char c)
{
	char	**split;

	split = malloc(sizeof(char *) * (count(str, c) + 1));
	if (!str || !split)
	{
		split[0] = ft_calloc (1, 1);
		return (NULL);
	}
	return (make_split(str, c, split));
}
/*
// Splits string depending on the delimiter
#include <stdio.h>
int main()
{
	int i = 0;
	//char a[] = "hola nicolas, como esta?";
	char **tab;
	tab = ft_split("  tripouille  42  ", ' ');
	while(tab[i])
	{
		printf(":%s:\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

*/