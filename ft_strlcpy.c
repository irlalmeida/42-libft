/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:45:06 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:11:15 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t counter;

	counter = 0;
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((src[counter] && counter < dstsize - 1))
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (ft_strlen(src));
}
