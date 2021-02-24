/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:59:08 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/24 15:41:18 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t size;
	char *dst_type;
	char *src_type;
	char *temp;

	dst_type = (char *)dst;
	src_type = (char *)src;
	temp = 0;
	size = ft_strlen(src_type);
	temp = memset(temp, 0, size);
	size = 0;
	
	while (size < len)
	{
		temp[size] = src_type[size];
		size++;
	}
	while (size < len)
	{
		dst_type[size] = temp[size];
		size++;
	}

	return (dst_type);

	//unsigned char *temp;
	//size_t counter;
	//unsigned char *dst_type;
	//unsigned char *src_type;
//
	//temp = 0;
	//counter = 0;
	//dst_type = (unsigned char *)dst;
	//src_type = (unsigned char *)src;
//
	//while (src_type[counter])
	//{
	//	temp[counter] = 0;
	//	counter++;
	//}
	//counter = 0;
	//while (src_type[counter])
	//{
	//    temp[counter] = src_type[counter];
	//    counter++;
	//}
	//counter = 0;
	//while (counter < len)
	//{
	//    dst_type[counter] = temp[counter];
	//    counter++;
	//}
	//return (dst_type);

}
