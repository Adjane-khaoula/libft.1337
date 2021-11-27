/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:58:30 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 21:03:55 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t	i;
	int		len;

	len = ft_strlen((char *)src);
	i = 0;
	if (!dst)
		return (0);
	if (!s)
		return (len);
	while (*(char *)src && ++i < s)
		*dst++ = *(char *)src++;
	*dst = 0;
	return (len);
}

// int main()
// {
// 	char *str = "BBBB";
// 	char buff1[0xF00];
// 	char buff2[0xF00];

// 	// bzero(buff2, sizeof(buff2));
// 	// bzero(buff1, sizeof(buff1));
// 	size_t i = ft_strlcpy(buff1, str, 0);
// 	printf("{%s}\n",buff1);
// 	printf("%lu\n\n\n",i);

// 	size_t l = strlcpy(buff2, str, 0);
// 	printf("{%s}\n",buff2);
// 	printf("%lu\n",l);
// }