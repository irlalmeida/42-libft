/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:40:41 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/02 14:35:04 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*m;

	if (!s)
		return (NULL);
	i = 0;
	m = ft_strdup(s);
	if (!m)
		return (NULL);
	while (m[i] != '\0')
	{
		m[i] = f(i, s[i]);
		i++;
	}
	return (m);
}
