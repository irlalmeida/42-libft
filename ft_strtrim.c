/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:11:41 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/02 20:17:13 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	setlen(char const *s1, char const *set)
{
	int len;
	int i;
	int j;
	int set_len;
	//int backwards;
	
	i = 0;
	set_len = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		while ((s1[i] != '\0'))
		{
			j = 0;
			while ((set[j] == s1[i]) && (set[j] != '\0'))
			{
				set_len++;	
				j++;
			}
			i++;
		}
	
	}
	return(set_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *erased;
	int len;
	int i;
	int j;

	erased = 0;
	i = 0;
	j = 0;
	len = setlen(s1, set);
	if (!s1)
		return ft_strdup(0);
	if (!set)
		return ft_strdup(s1);
	erased = ft_calloc((ft_strlen(s1) - len), sizeof(char));
	if (!erased)
		return (NULL);
	while (s1)
	{
		erased[i] = s1[j + len];
		j++;
		i++;
	}
	return(erased);
}
