/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:56:12 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:09:51 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	char	*dst_type;
	char	*src_type;
	size_t	a;

	a = 0;
	dst_type = (char *)dst;
	src_type = (char *)src;
	while (a < len)
	{
		dst_type[a] = src_type[a];
		if (src_type[a] == (char)c)
		{
			return ((void *)(dst_type + a + 1));
		}
		a++;
	}
	return (NULL);
}
