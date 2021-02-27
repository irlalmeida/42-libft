/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:41:02 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 18:00:33 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *a;

	i = 0;
	j = 0;
	a = 0;
	while (s1[i] != 0)
		i++;
	while (s2[j] != 0)
		j++;
	a = malloc(i + j);
	while (a && s2)
	{
		while (s2[j] != '\0')
		{
			while (s1[i] != '\0')
			{
				a[i] = s1[i];
				i++; 
			}
		a[i + j] = s2[j];
		j++;
		}
	}
	a[i + j] = '\0';
	return (a);
}
