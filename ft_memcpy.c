/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:35:27 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/13 15:53:32 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char	*pdest;
	unsigned char	*psrc;
	
	i = -1;
	pdest =(unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (*pdest && ++i < (int)n)
		*(pdest + i) = *(psrc +  i);
	return(dest);
}
