/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:05:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/14 19:18:55 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;

	if (dstsize >= (size_t)ft_strlen(dst))
	{
		while (*dst)
			dst++;
		while(*src && ++i < dstsize - ft_strlen(dst) + 1)
			*dst++ = *src++;
		*dst = 0;
		return(ft_strlen(dst) + ft_strlen(src));
	}
	//else 
	//if (dstsize < (size_t)ft_strlen(src))
		return (dstsize + ft_strlen(src));
}
	
#include<stdio.h>
#include<string.h>

int main()
{
	char *dest = strdup("q");
	char *src = strdup("dfg");

	printf("{%lu}\n",ft_strlcat(dest,src,4));
	printf("%s\n",dest);

}