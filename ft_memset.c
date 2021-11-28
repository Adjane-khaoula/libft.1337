/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:55:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:59:24 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int v, size_t c)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)p;
	i = -1;
	while (++i < c)
		*(ptr++) = (unsigned char)v;
	return (p);
}
