/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:08 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 17:15:39 by iribeiro         ###   ########.fr       */
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
        counter++;
        size++;
    }
    m = malloc(size+1);
	if (!m)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
	{
		m[counter] = str[counter];
		counter++;
	}
	m[counter] = '\0';
    return (m);
}