/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:44:17 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:37:09 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	char	*iter_s1;
	char	*iter_s2;
	char	*iter2_s1;

	iter_s1 = (char *)str1 - 1;
	i = -1;
	if (!*str2)
		return (++iter_s1);
	while (*(++iter_s1) && ++i < len)
	{
		iter2_s1 = iter_s1;
		iter_s2 = (char *)str2;
		while (*iter2_s1 && *iter_s2 && *iter2_s1++ == *iter_s2++)
			;
		if (!*iter_s2 && *(iter_s2 - 1) == *(iter2_s1 - 1)
			&& i + ft_strlen(str2) <= len)
			return (iter_s1);
	}
	return (NULL);
}
