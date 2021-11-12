/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:55:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/12 17:53:46 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

 void	*ft_memset(void *p, int v, size_t c)
 {
 	size_t			i;
 	unsigned char	*ptr;

	ptr = (unsigned char *)p;
 	i = 0;
 	while (i < c)
 	{
 		*(ptr++) = (unsigned char)v;
 		i++;
 	}
 	return (p);
 }

/*void		*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	m;
	unsigned char	*str;

	i = 0;
	str = b;
	m = (unsigned char)c;
	while (i < (int)n)
	{
		*(str++) = m;
		i++;
	}
	return (b);
}*/

