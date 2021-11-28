/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:58:30 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:36:04 by kadjane          ###   ########.fr       */
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
