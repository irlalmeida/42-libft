/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:02:23 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:11:08 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_size;
	size_t src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dst_size >= size)
		return (size + src_size);
	i = dst_size;
	j = 0;
	while (src[j] != '\0' && size > (i + 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_size + src_size);
}
