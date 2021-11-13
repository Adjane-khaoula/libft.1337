/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem  move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:06:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/13 16:25:58 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void *memmove( void *dest, const void *src, size_t s)
{
	int				i;
	unsigned char	*cpy;
	
	i = 0;
	while(*dest && *src)
	{
		if (dest + i == src + i   )
		{
			
			*(cpy + i) = *(src + i);
			ft_memcpy(dest,cpy,s);
		
	}
	ft_memcpy(dest, src, s);
}
