/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:57:45 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 22:51:12 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
// void fct(unsigned int i, char *c)
// {
// 	c += i;
// }

void	ft_striteri(char *s, void (f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s)
	{
		f(i, &s[i]);
		i++;
	}
}

// int main()
// {
//     char *s = strdup("khawla");
//     ft_striteri(s,&fct);
// 	printf("%s\n", s);
// }