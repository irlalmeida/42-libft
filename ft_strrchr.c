/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:34:45 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 18:30:17 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;
	size_t	len;

	len = ft_strlen(s);
	counter = len;
	while (counter >= 0)
	{
		if (s[counter] == c)
			return (char *)s + counter;
		counter--;
	}
	s = NULL;
	return (char *)s;
}
