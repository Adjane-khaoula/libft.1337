/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:14:09 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:55:25 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrword(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

int	lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while (s && *s && *s++ != c)
		i++;
	return (i);
}

char	*allocat(char const *s, char **tabstr, char c, int i)
{
	int	j;

	*(tabstr + i) = (char *)ft_calloc(lenword(s, c) + 1, sizeof(char));
	if (!tabstr)
	{
		j = 0;
		while (j++ < i)
			free(*(tabstr + j));
		free(tabstr);
		return (0);
	}
	return (*(tabstr + i));
}

char	**rempltab(char const *s, char **tabstr, char c)
{
	int	l;
	int	k;
	int	i;
	int	m;

	i = -1;
	k = nbrword(s, c);
	while (*s && ++i < k)
	{
		while (*s == c)
			s++;
		allocat(s, tabstr, c, i);
		if (!tabstr)
			return (0);
		m = lenword(s, c);
		l = -1;
		while (*s != c && ++l < m)
			tabstr[i][l] = *s++;
	}
	return (tabstr);
}

char	**ft_split(char const *s, char c)
{
	char	**tabstr;

	if (!s)
		return (0);
	tabstr = (char **)ft_calloc((nbrword(s, c) + 1), sizeof(char *));
	if (!tabstr)
		return (0);
	rempltab(s, tabstr, c);
	return (tabstr);
}
