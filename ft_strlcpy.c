/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:58:30 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/14 15:49:15 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t s)
{
	size_t	i;
	char	*iter;

	iter = src;
	i = 0;
	if (!dst)
		return (0);
	while (*iter && ++i < s)
		*dst++ = *iter++;
	*dst = 0;
	return (ft_strlen(src));
}
