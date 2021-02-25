/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:54:33 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 13:41:10 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *b1, const void *b2, size_t len)
{
    unsigned char *b1_type;
    unsigned char *b2_type;
    size_t a;
    
    b1_type = (unsigned char *)b1;
    b2_type = (unsigned char *)b2;
	a = 0;

	if (len == 0)
		return (0);
    while (a <= len && b1_type[a] == b2_type[a])
    {
       b1_type++;
       b2_type++;
       a++;
    }
    return (b2_type - b1_type);
}
