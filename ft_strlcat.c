/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:02:23 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 21:32:29 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t counter;
	
	counter = 0;
	while (dst[counter] && counter <= dstsize )
	{
	   counter++;
	}
	counter = 0;
	while (src[counter] != '\0')
	{
	   dst[dstsize+1] = src[counter];
	   dstsize++;
	   counter++;
	}
	dst[dstsize+1] = '\0';
	return (dstsize+1);
}
