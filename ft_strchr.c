/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:26:54 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/15 13:54:27 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *iter;

	iter = (char *)str;
	while (*iter)
	{
		if (*iter == c)
			return (iter);
		iter++;
		if (*iter == '\0' && c == 0)
			return (iter);
	}
	return (NULL);
}
#include<stdio.h>
int main()
{
	char str[]=  "hg";
	printf("%s",strchr(str, 0));
}

