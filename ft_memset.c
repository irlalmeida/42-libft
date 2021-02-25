/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:49:34 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 16:31:51 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *b_type;
    int counter;

    b_type = (unsigned char *)b;
    counter = 0;
	if (!b_type)
		return(0);
    while (len != 0)
    {
        b_type[counter] = (unsigned char)c;
        len--;
        counter++;
    }
    return (b);
}
