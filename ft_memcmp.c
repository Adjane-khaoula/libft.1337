/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:30:51 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/18 21:41:00 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*pptr1;
	unsigned char	*pptr2;
	//  size_t	i;
	 pptr1 = (unsigned char *)ptr1;
	 pptr2 = (unsigned char *)ptr2;
	while (size != 0)
	{
		if (*pptr1++ != *pptr2++)
			return (*(--pptr1) - *(--pptr2));
		size--;
	}
	return (0);
}


// 	i = 0;
// 	pptr1 = (unsigned char *)ptr1;
// 	pptr2 = (unsigned char *)ptr2;
// 	while (*pptr1 && *pptr2 && i < size)
// 	{
// 		if(*pptr1 == *pptr2)
// 		{
// 			pptr1++;
// 			pptr2++;
// 		}
// 		i++;
// 	}
// 	return (*pptr1 - *pptr2);
// }

// int main()
// {
// 	char * str1 = strdup("\xff\xaa\xde\200");
// 	char * str2 = strdup("\xff\xaa\xde\0");
// 	int i , j;
// 	j = ft_memcmp(str1,str2,8);
// 	i = memcmp(str1,str2,8);
// 	printf("{%d}\n\n\n",i);
// 	printf("{%d}",j);
// }