/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:35:25 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:10:52 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0' || s[counter] == c)
	{
		if (s[counter] == c)
			return (char *)s + counter;
		counter++;
	}
	s = NULL;
	return (char *)s;
}
