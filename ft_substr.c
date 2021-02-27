/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:31:33 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 10:03:51 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t size;
	size_t counter;

	size = 0;
	counter = start;
	while ((s[counter] != '\0') && (counter < len))
	{
		counter++;
		size++;
	}
	sub = malloc(len);
	if (!sub)
		return (NULL);
	counter = start;
	while (s[counter] != '\0')
	{
		sub[counter] = s[counter];
		counter++;
	}
	sub[counter] = '\0';
	return (sub);
}