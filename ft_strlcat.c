/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:05:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 20:56:22 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendes;

	lensrc = ft_strlen(src);
	lendes = ft_strlen(dst);
	i = 0;
	if (!dst || dstsize == 0)
		return (lensrc);
	if (dstsize <= lendes)
		return (dstsize + lensrc);
	while (*src && i < (dstsize - (lendes + 1)))
		dst[lendes + i++] = *(src++);
	dst[lendes + i] = '\0';
	return (lensrc + lendes);
}

// int main()
// {
// 	char *str = "AAAAAAAAA";
// 	char buff1[30];
// 	 ft_memset(buff1, 0, 30);
// 	char buff2[30];
// 	 ft_memset(buff1, 0, 30);

// 	printf("{%lu}******************************\n",ft_strlcat(buff1,str,1));
// 	printf("%s*******************************\n\n\n",buff1);
// 	printf("{%lu}\n",strlcat(buff2,str,1));
// 	printf("%s\n",buff2);
// }