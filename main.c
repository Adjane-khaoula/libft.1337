/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadjane <kadjane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:36:14 by kadjane           #+#    #+#             */
/*   Updated: 2021/11/28 11:59:52 by kadjane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include "libft.h"
// #include<stdio.h>

/*int	main(void)
{
	printf("%d",isalnum(2));
}*/


/*int	main(void)
{
	printf("%d",isascii(2));
}*/


/*int	main(void)
{
	printf(" %d ", isprint (' '));
}*/


/*int	main(void)
{
	printf("%d", ft_strlen("khfg"));
}*/


/*int	main(void)
{
	char str[]="khawla";
	printf("%s",ft_memset(str,'k',6));
}*/


/*int main(void )
{
	char	s[] = "khawla";
	printf ("%s", ft_bzero(s,3));
}*/


/*#include<stdio.h>
int main()
{
	printf("%d",ft_toupper('a'));
}*/


/*#include<stdio.h>
int main()
{
	char str[]=  "akhawlal";
	printf("%s",strchr(str, 'z'));
}*/


/*#include<stdio.h>
int main()
{
	char str[]=  "akhawlal";
	printf("%s",ft_strrchr(str, 'a'));
}*/


/*int main()
{
	// int dest[] = {1,2,3,4,5,6,7,8,9,5};
	// int src[]  = {6,10,6,4,3};
	char *s1 = NULL;
	char *s2 = NULL;

	ft_memcpy(s1,s2, sizeof(char) * 4);
	// printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", dest[0], dest[1], dest[2], 
	// dest[3], dest[4], dest[5], dest[6]);
	printf("%s\n", s1);
}*/


// int main()
// {
// 	int dest[] = {1,2,3,4,5,6,7,8,9,5};
// 	int src[]  = {6,10,6,4,3};
// 	// char s1[] = "qwertyuiopasdfghjkl";
// 	// char s2[] = "lkjhgfdsapoiuytrewq";

// 	ft_memcpy(dest,src, sizeof(int) * 2);
// printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", dest[0], dest[1], dest[2],
//  dest[3], dest[4], dest[5], dest[6]);
// 	//printf("%s\n", s1);
// }


// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char *dest = strdup("q");
// 	char *src = strdup("dfg");
//     size_t i;

// 	i = ft_strlcpy(dest,src,3);
// 	printf("%s\n",dest);
// 	printf("%lu\n",i);
// }


/*#include<stdio.h>
int main()
{
	printf("%d",isalnum(2));
}*/
 
 /*#include<stdio.h>
int main()
{
	printf("%d",isascii(2));
}*/

//  int main()
// {
//  	printf("%s",ft_itoa(2147483));

// }

// int main()
// {
// 	char *p;
// 	char *pp;
// 	char *data = strdup("/|\x12\xff\x09\0\x42\042\0\42|\\");
// 	p = (char *)memchr(data,'\0',12);
// 	pp = (char *)ft_memchr(data,'\0',12);
// 	printf("{%c}\n\n",*p); 
// 	printf("{%c}",*pp);
// }


// 	i = 0;
// 	pptr1 = (unsigned char *)ptr1;
// 	pptr2 = (unsigned char *)ptr2;
// 	while (*pptr1 && *pptr2 && i < size)
// 	{
// 		if(*pptr1 == *pptr2)
// 		{
// 			pptr1++;
// 			pptr2++;
// 		}
// 		i++;
// 	}
// 	return (*pptr1 - *pptr2);
// }

// int main()
// {
// 	char * str1 = strdup("\xff\xaa\xde\200");
// 	char * str2 = strdup("\xff\xaa\xde\0");
// 	int i , j;
// 	j = ft_memcmp(str1,str2,8);
// 	i = memcmp(str1,str2,8);
// 	printf("{%d}\n\n\n",i);
// 	printf("{%d}",j);
// }

// int main()
// {
// 	char src[] = "test basic du memcpy !";
// 	char buff1[22];
// 	char buff2[22];

// 	ft_memcpy(buff2, src, 22);
// 	printf("{%s}\n", buff1);
// 	return (0);
// }

// int main()
// {
// 	ft_putendl_fd("test",1);
// }

/*int main()

{
	int n;
	n = 2147483647;
	ft_putnbr_fd(n,2);
}*/

// int main()
// {
// 	ft_putstr_fd("test",1);
// }

// int main()
// {
// 	char **p = ft_split("      split       this for   me  !       ", ' ');
// 	while (*p)
// printf("%s\n", *p++);
// printf("%d\n", nbrword("      split       this for   me  !       ", ' '));
// }

// #include<stdio.h>
// int main()
// {
// 	char str[]=  "tripouille";
// 	//printf("%s",strchr(str, 't' + 256));
// 	printf("%s",ft_strchr(str, 't' + 256));
// }


// void fct(unsigned int i, char *c)
// {
// 	c += i;
// }
// int main()
// {
//     char *s = strdup("khawla");
//     ft_striteri(s,&fct);
// 	printf("%s\n", s);
// }

// int main ()
// {
// 	char *s1 = ft_strjoin("" , "42");
// //	char *s2 = strdup("layhdik");
// //	char *s;
// //	s = ft_strjoin(NULL , NULL);
// 	printf("%s\n", s1);
// 	free(s1);
// }

// int main()
// {
// 	char *str = "AAAAAAAAA";
// 	char buff1[30];
// 	 ft_memset(buff1, 0, 30);
// 	char buff2[30];
// 	 ft_memset(buff1, 0, 30);
// 	printf("{%lu}******************************\n",ft_strlcat(buff1,str,1));
// 	printf("%s*******************************\n\n\n",buff1);
// 	printf("{%lu}\n",strlcat(buff2,str,1));
// 	printf("%s\n",buff2);
// }

// int main()
// {
// 	char *str = "BBBB";
// 	char buff1[0xF00];
// 	char buff2[0xF00];

// 	// bzero(buff2, sizeof(buff2));
// 	// bzero(buff1, sizeof(buff1));
// 	size_t i = ft_strlcpy(buff1, str, 0);
// 	printf("{%s}\n",buff1);
// 	printf("%lu\n\n\n",i);

// 	size_t l = strlcpy(buff2, str, 0);
// 	printf("{%s}\n",buff2);
// 	printf("%lu\n",l);
// }


// #include<stdio.h>
// int main()
// {
// 	printf("%lu",strlen(0));
// }



//   #include<stdio.h>
//   #include<string.h>
// int main()
// {
// 	char *s1 = "oh no not the empty string !";
// 	char *s2 = "";
// 	size_t max = strlen(s2);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);
// 	printf("%s\n",i1);
// 	printf("%s\n",i2);
// }

/*#include<stdio.h>
int main()
{
	char *str=  "abbbbbbbb";
	printf("%s",ft_strrchr(str, 'a'));
}*/


// k - i + 2 car l - i = 6 et j commance a 0 et 1 pour '\0'
// int main ()
// {
// 	char *s;
// 	s = ft_strtrim("  \t \t \n   \n\n\n\t"," \n\t");
// 	printf ("%s\n",s);
// }

// int main()
// {
// 	char *s;
// 	s = ft_substr("tripouille", 100, 1);
// 	printf("|%s|\n",s);
// }


// #include<stdio.h>
// int main()
// {
// 			char	dst1[0xF0];
// 			char	dst2[0xF0];
// 			char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 			int		size = 0xF0 - 0xF;

// 			memset(dst1, 'A', sizeof(dst1));
// 			memset(dst2, 'A', sizeof(dst2));

// 			memcpy(dst1, data, strlen(data));
// 			memcpy(dst2, data, strlen(data));
// 			memmove(dst1 + 3, dst1, size);
// 			ft_memmove(dst2 + 3, dst2, size);			
// 	printf("{st:\n%s}\n\n{ft:\n%s}|\n", dst1, dst2);
	// char *s1 = (char*)malloc(sizeof(char) * 20);
	// char *s2 = (char*)malloc(sizeof(char) * 20);
	// s1 =  strcpy(s1, "123456789abcd");
	// s2 =  strcpy(s2, "123456789abcd");
	// ft_memmove(s1 + 3, s1 , 8);
	//    memmove(s2 + 3, s2 , 8);
	// printf("%s|\n%s|\n", s1, s2);
// }


/*void		*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	m;
	unsigned char	*str;

	i = 0;
	str = b;
	m = (unsigned char)c;
	while (i < (int)n)
	{
		*(str++) = m;
		i++;
	}
	return (b);
}*/


// int main ()
// {
// 	char f[] = "hajar";
// 	int i;

// 	i = 0;
// 	while (f[i])
// 	{
// 		ft_putchar_fd(f[i], 1);
// 	i++;
// 	}