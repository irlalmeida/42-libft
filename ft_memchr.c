/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:57:56 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 18:32:40 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	*b_type;
	unsigned char	c_type;

	b_type = (unsigned char *)b;
	c_type = (unsigned char)c;
	counter = 0;
	while (counter != len)
	{
		if (b_type[counter] == c_type)
			return (b_type + counter);
		counter++;
	}
	return (NULL);
}
