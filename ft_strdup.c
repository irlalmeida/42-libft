/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:08 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 20:37:39 by iribeiro         ###   ########.fr       */
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
    
    str = m;
    return(m);
}