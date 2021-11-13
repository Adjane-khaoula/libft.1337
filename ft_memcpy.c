/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:35:27 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/13 13:43:27 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char	*pdest;
	unsigned char	*psrc;
	
	i = -1;
	pdest =(unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (*pdest && ++i < (int)n)
		*(pdest + i) = *(psrc +  i);
	return(dest);
}



int main()
{
	// int dest[] = {1,2,3,4,5,6,7,8,9,5};
	// int src[]  = {6,10,6,4,3};
	char *s1 = NULL;
	char *s2 = NULL;

	ft_memcpy(s1,s2, sizeof(char) * 4);
	// printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", dest[0], dest[1], dest[2], dest[3], dest[4], dest[5], dest[6]);
	printf("%s\n", s1);
}