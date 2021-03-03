/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:11:41 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/02 22:38:21 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (i < len && (ft_strchr(set, s1[i])))
		i++;
	while (len > 0 && (ft_strchr(set, s1[len])))
		len--;
	if ((len - i + 1) <= 0)
		return (ft_strdup(0));
	return (ft_substr(s1, i, (len - i + 1)));
}
