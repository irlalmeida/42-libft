/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:35:59 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 23:50:34 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*find_num(int n, int *len)
{
	char	*num;

	num = 0;
	if (n < 0)
	{
		(*len)++;
		num = (char *)ft_calloc((*len + 1), sizeof(char));
		if (!num)
			return (NULL);
		num[0] = '-';
	}
	else
	{
		num = (char *)ft_calloc((*len + 1), sizeof(char));
		if (!num)
			return (NULL);
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char		*num;
	long int	nbr;
	int			len;
	int			nbr_n;

	nbr = n;
	len = 0;
	nbr_n = nbr;
	if (n == 0)
		return (ft_strdup("0"));
	while (nbr_n != 0)
	{
		nbr_n /= 10;
		len++;
	}
	if (!(num = find_num(n, &len)))
		return (NULL);
	if (n < 0)
		nbr = (nbr * (-1));
	while (((len--) > 0) && (nbr != 0))
	{
		num[len] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	return (num);
}
