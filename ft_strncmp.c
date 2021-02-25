/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:59:07 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 13:59:31 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t len)
{
    size_t counter;

    counter = 0;
    while (counter < len && (s1[counter] != '\0' || s2[counter] != '\0'))
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }
        counter++;
    }
    return (0);
}
