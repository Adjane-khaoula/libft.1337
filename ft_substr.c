/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:48:12 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/19 18:21:48 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *nvs;
 	char *pnvs;
	size_t i;

	if(!s)
		 return 0;
	i = 0;
	nvs = (char *)malloc(len + 1) ;
	if (!nvs)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	pnvs = nvs;
	while (*(s + start) && i < len)
	{
		*(nvs++) = *(s + start);
		start++;
		i++;
	}
	*nvs = '\0';
		return (pnvs);
}

// int main()
// {
// 	char *s;
// 	s = ft_substr("i just want this part #############", 5, 20);
// 	printf("%s",s);
// }