/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:35:27 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/15 12:50:41 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	i = -1;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (++i < (int)n)
		*(pdest + i) = *(psrc + i);
	return (dest);
}

// int main()
// {
// 	char src[] = "test basic du memcpy !";
// 	char buff1[22];
// 	char buff2[22];

// 	ft_memcpy(buff2, src, 22);
// 	printf("{%s}\n", buff1);
// 	return (0);
// }