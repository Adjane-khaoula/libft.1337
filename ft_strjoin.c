/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:11:05 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/20 12:58:27 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	char *ps;
	
	if (!s1 || !s2)
		return(0);
	s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!s)
		return (NULL);
	ps = s;
	if ((*s1 == '\0'))
		ps = (char *)s2;
	if ((*s2 == '\0') )
		ps = (char *)s1;
	if (*s1 && *s2)
	{
		while (*s1)
			*s++ = *s1++;
		while (*s2)
			*s++ = *s2++;
		*s = '\0';
	}
	return (ps);
}

// int main ()
// {
// //	char *s1 = strdup("");
// //	char *s2 = strdup("layhdik");
// //	char *s;
// //	s = ft_strjoin(NULL , NULL);
// 	printf("%s\n", ft_strjoin("" , "ghfghf"));
// }