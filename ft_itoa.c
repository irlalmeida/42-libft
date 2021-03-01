/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:35:59 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 20:14:57 by iribeiro         ###   ########.fr       */
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
	if (n == 0)
		return ("0");
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	nbr = n;
	if (n < 0)
	{
		num = malloc(len + 2);
		num[0] = '-';
		while (len > 1)
		{
			num[len] = (nbr % 10) + '0';
			len--;
			nbr /= 10;
		}
	}
	else
	{
		num = malloc(len + 1);
		while (len > 0)
		{
			num[len] = ((nbr % 10) + '0');
			len--;
			nbr /= 10;
		}
	}
	num[len] = '\0';
	return (num);
}
