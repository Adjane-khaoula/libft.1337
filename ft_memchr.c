/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:02:41 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/18 18:26:56 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int c, size_t size)
{
	char *str;
	char search;
	size_t i;
	
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




// int main()
// {
// 	char *p;
// 	char *pp;
// 	char *data = strdup("/|\x12\xff\x09\0\x42\042\0\42|\\");
// 	p = (char *)memchr(data,'\0',12);
// 	pp = (char *)ft_memchr(data,'\0',12);
// 	printf("{%c}\n\n",*p); 
// 	printf("{%c}",*pp);
// }