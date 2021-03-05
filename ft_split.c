/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:50:18 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/04 22:18:25 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	findwords(char const *s, char c)
{
	size_t		words;
	int			j;

	words = 0;
	j = 0;
	while ((s[j] != '\0') && (s[j] == c))
	{
		j++;
	}
	while (s[j] != '\0')
	{
		while ((s[j] != '\0') && (s[j] != c))
		{
			j++;
		}
		words++;
		while ((s[j] != '\0') && (s[j] == c))
		{
			j++;
		}
	}
	return (words);
}

static size_t	wordlen(char const *s, char c)
{
	size_t		i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
	{
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	size_t	words;
	char	**res;

	i = -1;
	if (!s)
		return (NULL);
	words = findwords(s, c);
	if (!(res = ft_calloc(words + 1, sizeof(char *))))
		return (NULL);
	words = 0;
	while ((s[++i]))
	{
		if ((s[i] != c) && (s[i] != '\0'))
		{
			res[words] = ft_substr(s, i, wordlen(&s[i], c));
			words++;
			i = (i + wordlen(&s[i], c) - 1);
		}
	}
	res[words] = NULL;
	return (res);
}
