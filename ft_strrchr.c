/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:34:45 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/20 20:07:07 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int counter;

    counter = 0;
    while (s[counter] != '\0')
    {
        s++;
        counter++;
    }
    
    while (s[counter] != s[counter-counter])
    {
        if (s[counter] == c)
        {
            return (char *)s;
        }
        counter--;
    }
    s = NULL;
    return (char *)s;
}
