/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:49:40 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/13 13:36:30 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdio.h>

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





#endif