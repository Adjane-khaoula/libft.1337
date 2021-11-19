/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:32:49 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/19 15:40:15 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)

{
	if(!s)
	 return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd , "\n", 1);
}

// int main()
// {
// 	ft_putendl_fd("test",1);
// }