/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:45:06 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/20 20:06:44 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t a;

    a = 0;
    while (a < dstsize && src[a] != '\0')
    {
        dst[a] = src[a];
        a++;
    }
    while (a < dstsize)
    {
        dst[a] = '\0';
        a++;
    }
    return (a);
}
