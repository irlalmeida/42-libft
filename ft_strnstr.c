/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:01:38 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:11:34 by iribeiro         ###   ########.fr       */
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
	b = (unsigned char *)big;
	l = (unsigned char *)little;
	if (!l[i])
		return ((char *)&b[i]);
	while (i < len && b[i])
	{
		j = 0;
		while (((i + j) < len) && (b[i+j] == l[j]))
		{
			if (!l[j + 1])
				return ((char *)&b[i]);
			j++;
		}
		i++;
	}
	return (0);
}

