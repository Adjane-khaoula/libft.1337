/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:24:33 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/13 11:32:21 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*iter;
	char	*start;

	start = (char *)str;
	iter = start + ft_strlen(str);
	while (iter != start)
		if (*iter-- == c)
			return (iter + 1);
	return (NULL);
}
