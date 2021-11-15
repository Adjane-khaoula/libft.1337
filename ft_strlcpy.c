/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:58:30 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/15 19:15:02 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t s)
{
	size_t	i;
	unsigned char	*iter_dst;
	unsigned char	*iter_src;

	iter_dst = (unsigned char*)src;
	iter_src = (unsigned char*)src;
	i = -1;
	if (!dst)
		return (0);
	while (*iter_dst && ++i < s)
		*iter_dst++ = *iter_src++;
	*iter_dst = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char *str = "BBBB";
// 	char buff1[0xF00];
// 	char buff2[0xF00];

// 	size_t i = ft_strlcpy(buff2, str, 0);
// 	printf("{%s}\n",buff2);
// 	printf("%lu\n",i);

// 	// size_t i = strlcpy(buff2, str, 0);
// 	// printf("{%s}\n",buff2);
// 	// printf("%lu\n",i);
	
// }