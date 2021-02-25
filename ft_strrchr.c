/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:34:45 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 20:17:18 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t counter;
	size_t len;
	len = ft_strlen(s);
	counter = len-1;
	while (s[counter] != '\0' || s[counter] == c)
    {
        if (s[counter] == c)
            return (char *)s+counter;
        counter--;
    }
    s = NULL; 
    return (char *)s;

}
