/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:51:02 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:09:10 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*b_type;
	size_t			a;

	a = 0;
	b_type = (unsigned char *)b;
	while (a < len)
	{
		b_type[a] = '\0';
		a++;
	}
}
