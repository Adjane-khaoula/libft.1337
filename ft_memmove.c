/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:06:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/14 10:57:41 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove( void *dest, const void *src, size_t s)
{
	int				i;
	int				j;
	unsigned char	*cpy;

	cpy = NULL;
	i = 0;
	while (*(unsigned char *)dest && *(unsigned char *)src)
	{
		if (dest + i == src + i)
		{
			j = -1;
			while (++j < ft_strlen(src))
				*(cpy + j) = *((unsigned char *)src + j);
			ft_memcpy(dest, cpy, s);
			return (dest);
		}
		i++;
	}
	ft_memcpy(dest, src, s);
	return (dest);
}
