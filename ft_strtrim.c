/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:00:20 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 12:01:03 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	dim1(char const *s1, char const *set)
{
	int	j;
	int	i;

	i = -1;
	while (s1[++i])
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
				j++;
		if (set[j] == '\0')
			break ;
	}
	return (i);
}

int	dim2(char const *s1, char const *set)
{
	int	j;
	int	l;

	l = ft_strlen(s1);
	while (--l)
	{
		j = 0;
		while (set[j] != '\0' && s1[l] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		j;
	int		l;
	int		k;

	if (!s1)
		return (NULL);
	i = dim1(s1, set);
	l = ft_strlen(s1);
	if (i == l)
		return (ft_strdup(""));
	k = dim2(s1, set);
	s = (char *)malloc(k - i + 2);
	if (!s)
		return (0);
	j = 0;
	while (i <= k)
		s[j++] = s1[i++];
	s[j] = '\0';
	return (s);
}
