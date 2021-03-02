/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:35:59 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 21:36:30 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char *num;
	int nbr;
	int len;
	int nbr_n;

	nbr = n;
	len = 0;
	num = 0;
	nbr_n = nbr;

	if (n == 0)
		return ("0");
	while (nbr_n != 0)
	{
		nbr_n /= 10;
		len++;
	}
	if (!len)
		return (0);
	if (n < 0)
	{
		nbr = nbr * -1;
		num = (char *)ft_calloc(len + 1, sizeof(char));
		len++;
		num[0] = '-';
	}
	else
		num = (char *)ft_calloc(len + 1, sizeof(char));
		if (!num)
		return (0);
	while (len > 0 && nbr !=0)
	{
		num[len - 1] = ((nbr % 10) + '0');
		len--;
		nbr /= 10;
		//printf("len %i\n",len);
	}
	return (num);
}

/*int main (void)
{
	printf("eai foi? %s\n", ft_itoa(-2147483648));
}*/
