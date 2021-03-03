/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:11:41 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/02 22:12:38 by iribeiro         ###   ########.fr       */
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
	int i;
	int len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(set);
	while(i < len)
	{
		ft_strchr(s1, set[i]);
		i++;
	}
	while(len > 0)
	{
		ft_strchr(s1, set[len]);
		len--;
	}
	if ((len - i + 1) <= 0)
		return (ft_strdup(0));
	return (ft_substr(s1, i, (len - i + 1)));
		
	//char *erased;
	//int len;
	//int i;
	//int j;

	//erased = 0;
	//i = 0;
	//j = 0;
	//len = setlen(s1, set);
	//if (!s1 || !set)
	//	return (NULL);
	//erased = ft_calloc((ft_strlen(s1) - len), sizeof(char));
	//if (!erased)
	//	return (NULL);
	//while (s1)
	//{
	//	erased[i] = s1[j + len];
	//	j++;
	//	i++;
	//}
	//return(erased);
}
