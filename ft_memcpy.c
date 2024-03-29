/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:53:16 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:10:08 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			counter;
	unsigned char	*dst_type;
	unsigned char	*src_type;

	counter = 0;
	dst_type = (unsigned char *)dst;
	src_type = (unsigned char *)src;
	if (!dst_type && !src_type)
		return (0);
	if (counter == len)
		return (dst);
	while ((counter < len))
	{
		dst_type[counter] = src_type[counter];
		counter++;
	}
	return (dst_type);
}
