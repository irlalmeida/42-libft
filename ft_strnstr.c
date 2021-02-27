/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:01:38 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 19:10:20 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	unsigned char *b;
	unsigned char *l;

	i = 0;
	j = 0;
	b = (unsigned char *)big;
	l = (unsigned char *)little;
	if ((len == 0) || (l[0] == '\0'))
		return ((char *)b);
	if (l > b)
		return (NULL);
	while (i != len)
	{
		if (b[i] == l[j])
		{
			while (l[j] != '\0')
			{
				if (l[j + 1] == '\0')
					return ((char *)b + i - j);
				j++;
				i++;
			}
		}
		i++;
	}
	return (0);
}
