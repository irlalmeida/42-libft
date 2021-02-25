/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:45:06 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 20:42:35 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t counter;

    counter = 0;
    while (counter < dstsize && src[counter])
    {
        dst[counter] = src[counter];
        counter++;
    }
    while (counter < dstsize)
    {
        dst[counter] = '\0';
        counter++;
    }
    return (dstsize);
}
