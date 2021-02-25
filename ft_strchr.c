/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:35:25 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 17:37:20 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int counter;

    counter = 0;
	while (s[counter] != '\0' || s[counter] == c)
    {
        if (s[counter] == c)
            return (char *)s+counter;
        counter++;
    }
    s = NULL; 
    return (char *)s;

}
