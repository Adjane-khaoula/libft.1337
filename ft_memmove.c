/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:06:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:58:24 by kadjane          ###   ########.fr       */
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
			ft_memset(dest + len, *((int *)(src + len)), 1);
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}
