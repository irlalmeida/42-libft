/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:54:33 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 18:26:38 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*b1_type;
	unsigned char	*b2_type;
	size_t			counter;

	b1_type = (unsigned char*)b1;
	b2_type = (unsigned char*)b2;
	counter = 0;
	while (counter < len)
	{
		if (b1_type[counter] != b2_type[counter])
			return (b1_type[counter] - b2_type[counter]);
		counter++;
	}
	return (0);
}
