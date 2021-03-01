/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:49:34 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:10:17 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_type;
	int				counter;

	b_type = (unsigned char *)b;
	counter = 0;
	while (len != 0)
	{
		b_type[counter] = (unsigned char)c;
		len--;
		counter++;
	}
	return (b);
}
