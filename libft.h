/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:49:40 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/16 21:52:05 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalnum(int c);		
int	ft_strlen(const char *str);
void	*ft_memset(void *p, int v, size_t c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isaplha(int c);
void	ft_bzero(void *s, size_t n);
int	ft_isprint(int c);
char	*ft_strchr(const char *str, int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *str1, const char *str2, size_t len);
 void *calloc(size_t cnt, size_t size);
 int	ft_atoi(const char *str);
 void	*ft_memmove( void *dest, const void *src, size_t s);
#endif