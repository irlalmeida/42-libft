/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:41:02 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/01 14:11:03 by iribeiro         ###   ########.fr       */
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
	if (!s1 || !s2)
		return(0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	a = malloc(s1_len + s2_len + 1);
	if (!a)
		return (0);
	while ((s1[i] != '\0'))
	{
		a[i] = s1[i];
		i++; 
	}
	while (s2[j] != '\0')
	{
		a[i + j] = s2[j];
		j++;
	}
	a[i + j] = '\0';
	return (a);
}
