/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:30:51 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:58:11 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*pptr1;
	unsigned char	*pptr2;

	pptr1 = (unsigned char *)ptr1;
	pptr2 = (unsigned char *)ptr2;
	while (size != 0)
	{
		if (*pptr1++ != *pptr2++)
			return (*(--pptr1) - *(--pptr2));
		size--;
	}
	return (0);
}
