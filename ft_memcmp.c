/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:54:33 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/18 23:01:24 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *b1, const void *b2, size_t len)
{
    unsigned char *b1_type;
    unsigned char *b2_type;
    int a;
    
    b1_type = (unsigned char *)b1;
    b2_type = (unsigned char *)b2;
    while (b1_type[a] <= len && b1_type[a] == b2_type[a])
    {
       b1_type++;
       b2_type++;
       a++;
    }
    return (b1_type - b2_type);
}
