/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:56:17 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 19:57:12 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] == '\v' || str[counter] == '\n' || str[counter] == \
	'\t' || str[counter] == '\f' || str[counter] == '\r' || str[counter] == ' ')
		counter++;
	return (counter);
}

int			ft_atoi(const char *nptr)
{
	long int	res;
	int			negnum;
	long int	i;

	res = 0;
	negnum = 1;
	i = ft_isspace(nptr);
	if (nptr[i] == '-')
	{
		negnum = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (negnum * res);
}
