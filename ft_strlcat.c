/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:05:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:56:59 by kadjane          ###   ########.fr       */
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
