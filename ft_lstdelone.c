/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:27:58 by iribeiro          #+#    #+#             */
/*   Updated: 2021/03/06 18:05:40 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void (ft_lstdelone(t_list *lst, void (*del)(void *)))
{
	t_list *temp;

	lst->next = temp;
	free(lst);
	del(lst);
	temp->next = lst;
}
