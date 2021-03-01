/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:35:59 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:47:53 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *num;
	int nbr;
	int len;

	nbr = n;
	len = 0;
	num = 0;
	while (nbr > 1)
	{
		nbr /= 10;
		len++;
	}
	if (n < 0)
		num[0] = '-';
	num = malloc(len + 1);
	nbr = n;
	while (len > 0)
	{
		num[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (num);
}