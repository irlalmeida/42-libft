/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:57:56 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/20 20:08:02 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *b, int c, size_t len)
{
    unsigned int a;
    unsigned char *b_type;
    unsigned char c_type;

    b_type = (unsigned char *)b;
    c_type = (unsigned char)c;
    
    a = 0;
    while (b_type[a] != '\0' && b_type[a] != len)
    {
        if (b_type[a] == c_type)
        {
            return (b_type);
        }
        a++;
    }
    return (NULL);
}
