/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:49:40 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/20 23:06:18 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalnum(int c);		
size_t	ft_strlen(const char *str);
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
 size_t	ft_strlcpy(char *dst,const char *src, size_t s);
 void ft_putstr_fd(char *s, int fd);
 void ft_putchar_fd(char c, int fd);
 void	*ft_memcpy(void *dest, const void *src, size_t n);
 int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
 size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
 void ft_putnbr_fd(int n, int fd);
 void ft_putchar_fd(char c, int fd);
 void ft_putstr_fd(char *s, int fd);
 void ft_putendl_fd(char *s, int fd);
 char *ft_substr(char const *s, unsigned int start, size_t len);
 char	*ft_strdup(char *src);
 char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
 char *ft_strjoin(char const *s1, char const *s2);
 char *ft_strtrim(char const *s1, char const *set);
 char *ft_itoa(int n);
 void *ft_calloc(size_t cnt, size_t size);
 
#endif