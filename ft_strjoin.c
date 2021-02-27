/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:41:02 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/27 18:39:37 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char s1_len;
	char s2_len;
	char *a;

	i = 0;
	j = 0;
	a = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	a = malloc(s1_len + s2_len);
	while ((s1[i] != '\0') || (s1[i] == ' ') )
	{
		while (s2[j] != '\0' || (s2[i] == ' '))
		{
			a[i] = s1[i];
			i++; 
		}
	a[i + j] = s2[j];
	j++;
	}
	a[i + j] = '\0';
	return (a);
}