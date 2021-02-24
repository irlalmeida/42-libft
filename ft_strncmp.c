/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:59:07 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/20 12:59:11 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t len)
{
    unsigned int a;

    a = 0;
    while (a < len && (s1[a] != '\0' || s2[a] != '\0'))
    {
        if (s1[a] != s2[a])
        {
            return (s1[a] - s2[a]);
        }
        a++;
    }
    return (0);
}
