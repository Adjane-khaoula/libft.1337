/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:36:50 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 21:37:20 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t size)
{
	char	*p;

	p = (char *)malloc(cnt * size);
	if (!p)
		return (0);
	ft_bzero(p, cnt * size);
	return (p);
}
