/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iribeiro <iribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 13:01:38 by iribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 16:29:33 by iribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//char *ft_strnstr(const char *big, const char *little, size_t len)
//{
//    //size_t i;
	//size_t j;
	//
    //i = 0;
	//j = 0;
	//if ((len == 0) || (little[0] == '\0'))
	//	return ((char *)big);
	//if (little > big)
	//	return (NULL);
    //while (i != len)
    //{
    //    if (big[i] == little[j])
    //    {
    //        while (little[j] != '\0')
    //        {
    //            if (little[j+1] == '\0')
    //            {
    //                return ((char *)big + i - j); 
    //            }
	//			j++;
	//			i++;
    //        }
    //	}
	//	i++;
	//}
	//return (0);

char    *ft_strnstr(const char *m, const char *n, size_t len)
{
    unsigned char    *m1;
    unsigned char    *n1;
    size_t            i;
    size_t            j;

    m1 = (unsigned char *)m;
    n1 = (unsigned char *)n;
    i = 0;
    if (!n1[i])
        return ((char *)&m1[i]);
    while (i < len && m1[i])
    {
        j = 0;
        while ((i + j) < len && m1[i + j] == n1[j])
        {
            if (!n1[j + 1])
                return ((char *)&m1[i]);
            j++;
        }
        i++;
    }
    return (0);
}

