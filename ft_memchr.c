/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:02:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:22:28 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int c, size_t size)
{
	char	*str;
	char	search;
	size_t	i;

	str = (char *)memblock;
	search = (char)c;
	i = -1;
	while (++i < size)
	{
		if (*str == search)
			return (str);
		str++;
	}
	return (NULL);
}
