/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 21:26:10 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 08:12:55 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			num[11];
	int			num_count;
	long int	long_num;

	long_num = n;
	num_count = 0;
	if (long_num < 0)
	{
		long_num = -long_num;
		write(fd, "-", 1);
	}
	if (long_num == 0)
		write(fd, "0", 1);
	while (long_num > 0)
	{
		num[num_count] = long_num % 10 + '0';
		long_num = long_num / 10;
		num_count++;
	}
	num_count--;
	while (num_count >= 0)
	{
		write(fd, &num[num_count], 1);
		num_count--;
	}
}
