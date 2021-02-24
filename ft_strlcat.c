/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:02:23 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/20 20:06:29 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t a;
	
	a = 0;
	while (dst[a] != '\0' && a <= dstsize )
	{
	   a++;
	}
	while (src[a] != '\0')
	{
	   dst[dstsize+1] = src[a];
	   dstsize++;
	   a++;
	}
	dst[dstsize+1] = '\0';
	return (dstsize+1);
}
