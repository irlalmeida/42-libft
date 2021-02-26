/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:01:38 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 14:30:27 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
	size_t j;
	
    i = 0;
	j = 0;
	if (!little || !big || !len)
		return ((char *)big);
    while (big[i] != '\0' && i != len)
    {
        while (big[i] == little[j])
        {
            while (little[j] != '\0')
            {
                if (little[j] == '\0')
                {
                    return (char *)little; 
                }
				j++;
				i++;
            }
    	}
		i++;
		return(NULL);
	}
	return(NULL);
}
