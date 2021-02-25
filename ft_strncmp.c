/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:59:07 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 20:31:21 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t len)
{
    size_t counter;
	unsigned char *s1_type;
	unsigned char *s2_type;
	s1_type = (unsigned char *)s1;
	s2_type = (unsigned char *)s2;

    counter = 0;
    while (counter < len && (s1_type[counter] != '\0' || s2_type[counter] != '\0'))
    {
        if (s1_type[counter] != s2_type[counter])
        {
            return (s1_type[counter] - s2_type[counter]);
        }
        counter++;
    }
    return (0);
}
