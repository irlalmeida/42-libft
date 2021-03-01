/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:35:59 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 15:50:16 by iribeiro         ###   ########.fr       */
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
	num = malloc(len + 1);
	nbr = n;
	if (n < 0)
	{
		num[0] = '-';
		while (len > 0)
		{
			num[len] = (nbr % 10) + '0';
			len--;
		}
	}
	else
	{
		while (len >= 0)
		{
			num[len] = (nbr % 10) + '0';
			len--;
		}
	}
	num[len] = '\0';
	return (num);
}