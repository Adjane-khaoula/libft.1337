/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:05:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/15 12:51:20 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	s;
	int	d;

	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = -1;

	if ((int)dstsize > d)
	{
		while (dst)
			dst++;
		while (*src && ++i < (int)dstsize - (d + 1))
			*dst++ = *src++;
		*dst = 0;
		return(d + s);
	}
	else 
	if ((int)dstsize < d)
		return (dstsize + s);
	else
		return(d + s);
}
	
#include<stdio.h>
#include<string.h>

// int main()
// {
// 	char *dest = strdup("q");
// 	char *src = strdup("dfg");

// 	printf("{%lu}\n",ft_strlcat(dest,src,4));
// 	printf("%s\n",dest);

// }