/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:31:33 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 10:08:56 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t counter;
	size_t size;

	counter = start;
	size = 0;
	while ((s[counter] != '\0') && (counter <= len))
		counter++;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	counter = start;
	while (s[counter] != '\0')
	{
		sub[size] = s[counter];
		counter++;
		size++;
	}
	sub[size + 1] = '\0';
	return (sub);
}
