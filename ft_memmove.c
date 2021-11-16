/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:06:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/16 23:06:08 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t len)
{
	if (dest == src)
		return (dest);
	if (src < dest && src + ft_strlen(dest) > dest)
	{
			while (len--)
				ft_memset(dest + len, *((int *)(src + len)),1);
			return (dest);	
	}
	ft_memcpy(dest, src, len);
	return (dest);
}

// #include<stdio.h>
// int main()
// {
// 			char	dst1[0xF0];
// 			char	dst2[0xF0];
// 			char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 			int		size = 0xF0 - 0xF;

// 			memset(dst1, 'A', sizeof(dst1));
// 			memset(dst2, 'A', sizeof(dst2));

// 			memcpy(dst1, data, strlen(data));
// 			memcpy(dst2, data, strlen(data));
// 			memmove(dst1 + 3, dst1, size);
// 			ft_memmove(dst2 + 3, dst2, size);
			
// 	printf("{st:\n%s}\n\n{ft:\n%s}|\n", dst1, dst2);
	// char *s1 = (char*)malloc(sizeof(char) * 20);
	// char *s2 = (char*)malloc(sizeof(char) * 20);
	// s1 =  strcpy(s1, "123456789abcd");
	// s2 =  strcpy(s2, "123456789abcd");
	// ft_memmove(s1 + 3, s1 , 8);
	//    memmove(s2 + 3, s2 , 8);
	// printf("%s|\n%s|\n", s1, s2);
// }