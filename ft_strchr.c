/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:26:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 20:43:41 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*iter;
	char	ch;

	iter = (char *)str;
	ch = (char)c;
	while (*iter)
	{
		if (*iter == ch)
			return (iter);
		iter++;
		if (*iter == '\0' && ch == 0)
			return (iter);
	}
	return (NULL);
}
/*#include<stdio.h>
int main()
{
	char str[]=  "tripouille";
	printf("%s",strchr(str, 't' + 256));
	printf("%s",ft_strchr(str, 't' + 256));
	
}
*/
