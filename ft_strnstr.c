/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:01:38 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 20:37:27 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t counter;

    counter = 0;
    while (big[counter] != '\0' && counter != len)
    {
        if (big[counter] == little[counter])
        {
            while (big[counter] == little[counter] && little[counter] != '\0')
            {
                counter++;
                if (little[counter] == '\0')
                {
                    return (char *)little; 
                }
            }
        }
        
    }
    return(0);
}
