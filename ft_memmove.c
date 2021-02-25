/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:59:08 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 16:59:40 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t size;
	char *dst_type;
	char *src_type;

	dst_type = (char *)dst;
	src_type = (char *)src;
	size = 0;
	if (!dst_type && !src_type)
		return(0);
	
	if (src_type < dst_type)
		while (len > 0)
		{
			len--;
			dst_type[len] = src_type[len];
		}
	else
		while ((size < len))
			{
				dst_type[size] = src_type[size];
				size++;
			}

	return (dst_type);
}
