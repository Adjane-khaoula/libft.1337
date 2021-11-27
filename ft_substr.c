/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:48:12 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 21:28:49 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nvs;
	char	*pnvs;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	nvs = (char *)malloc(len + 1);
	if (!nvs)
		return (0);
	pnvs = nvs;
	while (*(s + start) && i++ < len)
		*(nvs++) = *(s + start++);
	*nvs = '\0';
	return (pnvs);
}

// int main()
// {
// 	char *s;
// 	s = ft_substr("tripouille", 100, 1);
// 	printf("|%s|\n",s);
// }