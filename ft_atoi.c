/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:56:17 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/25 21:28:36 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int res;
	int negnum;
	long int i;

	res = 0;
	negnum = 0;
	i = 0;
	if (nptr[0] == '-')
	{
		negnum = -1;
		i++;
	}
	else
		negnum = 1;

	if (nptr[i] >= '0' && nptr[i] <= '9')
	{
		while ((nptr[i] != '\0') && (nptr[i] >= '0' && nptr[i] <= '9'))
		{
			res = res * 10 + nptr[i] - '0';
			i++;
		}
		return (negnum * res);
	}
	else
		return(0);
}
