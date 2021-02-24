/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:51:22 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/18 23:01:42 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isascii(int a)
{
    int flag;

    flag = '1';
    if (a >= 0 && a <= 127)
        {
            return (flag);
        }
    return (0);
}
