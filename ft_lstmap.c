/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:21:52 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/06 22:06:54 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	if (!lst || f)
		return (NULL);
	if (!(ft_lstnew(lst)))
	{
		del(ft_lstnew(lst));
		return (NULL);
	}
	return (ft_lstnew(ft_lstiter((*lst), f)));
	
}
