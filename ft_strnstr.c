/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:01:38 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 15:56:45 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
	size_t j;
	
    i = 0;
	j = 0;
	if ((little == NULL) || (len == 0) || (little[0] == '\0'))
		return ((char *)big);
	if ((little > big) || (big[0] == '\0'))
		return (NULL);
    while ((big[i] != '\0') && (i != len))
    {
        while (big[i] == little[j])
        {
            while (little[j] != '\0')
            {
                if (little[j+1] == '\0')
                {
                    return ((char *)big + i - j); 
                }
				j++;
				i++;
            }
    	}
		i++;
	}
	return (NULL);
}
