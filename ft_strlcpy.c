/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:45:06 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 20:49:17 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t counter;
    unsigned char *dst_type;
    unsigned char *src_type;

    counter = 0;
    dst_type = (unsigned char *)dst;
    src_type = (unsigned char *)src;

	if (!dst_type && !src_type)
		return(0);	

	if (counter == dstsize)
		return (dstsize);

    while ((counter < dstsize))
    {
        dst_type[counter] = src_type[counter];
        counter++;
    }
    return (counter);
}
