/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:47:26 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/27 22:47:29 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*src;

	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	src = (char *)ft_calloc((i + 1), sizeof(char));
	if (!src)
		return (NULL);
	i = 0;
	while (s[i])
	{
		src[i] = f(i, s[i]);
		i++;
	}
	src[i] = '\0';
	return (src);
}
