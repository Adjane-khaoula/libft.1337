/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:49:39 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/16 12:10:01 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
 void *ft_calloc(size_t cnt, size_t size)
 {
	char *p;

	p = (char *)malloc(cnt * size);
	if (!p)
		return (NULL);
	ft_bzero(p,cnt * size);
	 return (p);
 }
 