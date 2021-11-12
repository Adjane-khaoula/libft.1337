/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:24:33 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/12 21:35:33 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*iter;

	i = ft_strlen(str);
	iter = (char *)str;
	while (*iter + i)
	{
		if (*iter++ == c)
			return (iter + 1);
		i--;
	}
	return (NULL);
}

// char	*ft_strrchr(const char *str, int c)
// {
// 	char	*iter;
// 	char	*start;

// 	start = (char *)str;
// 	iter = start + ft_strlen(str);
// 	while (iter != start)
// 		if (*iter-- == c)
// 			return (iter + 1);
// 	return (NULL);
// }

#include<stdio.h>
int main()
{
	char str[]=  "akhawlal";
	printf("%s",ft_strrchr(str, 'a'));
}