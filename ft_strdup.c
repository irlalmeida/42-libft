/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:08 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 14:42:41 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *str)
{
    int size;
    char *m;
    int counter;
    
    size = 0;
    m = 0;
    counter = 0;
    while (str[counter] != '\0')
    {
        str++;
        size++;
    }
    m = malloc(size);
    
    m = (char *)str;
	return(m);
}