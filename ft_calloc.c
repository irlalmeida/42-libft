/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:26:02 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:09:15 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char		*m;
	size_t		a;

	a = 0;
	m = malloc(number * size);
	if (m == 0)
		return (NULL);
	else
	{
		while (a < (number * size))
		{
			m[a] = '\0';
			a++;
		}
		return (m);
	}
}
