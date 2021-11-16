/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:00:14 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/16 23:23:36 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

  int	ft_atoi(const char *str)
 {
	char	*itr;
	unsigned int	cmp;
	 int	n;
	 
	 itr = (char *)str - 1;
	 cmp = 0;
	 n = 1;
	 while(*(++itr))
	 {
		 while ((*itr >= 9 && *itr <= 13) || *itr == ' ')
		 	itr++;
		if (*itr == '+' || *itr == '-')
		{
			if (*itr++ == '-')
				n = -1;
		}
	 	while (*itr >= '0' && *itr <= '9')
		{
			cmp = (cmp * 10) + (*itr - '0');
			itr++;
			if (n > 0  && cmp > 2147483647)
				return (-1);
			if (n < 0  && cmp > 2147483648)
				return (0);
		}
		return(n * cmp);
	 }
	 return (0);	 
}


// #include<stdlib.h>
// int main()
// {
// 	printf("%d\n",ft_atoi("-2147483647"));
// 	printf("%d",atoi("-2147483647"));
//  }