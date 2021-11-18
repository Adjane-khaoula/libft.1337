/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:05:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/18 06:30:45 by kadjane          ###   ########.fr       */
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
	if ((dstsize == 0 && !dst ) || dstsize == 0)
		return(lensrc);	
	if ( dstsize >= lendes)
		{
			while (*src && i < (dstsize -(lendes + 1)))
			{
				dst[lendes + i ] = *(src++);
				i++;
			}
			*dst = '\0';
			return (lensrc + lendes);
		}
		return (dstsize + lensrc);
}
	
#include<stdio.h>
#include<string.h>

int main()
{
	char *str = "n\0AA";
	char buff1[0xF00] = "\0AAAAAAAAAAAAAAAA";
	char buff2[0xF00] = "\0AAAAAAAAAAAAAAAA";

	printf("{%lu}\n",ft_strlcat(buff1,str,10));
	printf("%s\n\n\n",buff1);
	printf("{%lu}\n",strlcat(buff2,str,10));
	printf("%s\n",buff2);
}