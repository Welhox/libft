/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:33:40 by clundber          #+#    #+#             */
/*   Updated: 2023/10/26 17:55:35 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"
#include<stdlib.h>
/*int	ft_isalpha(int);
int ft_isdigit(int);
int ft_isalnum(int);
int ft_isascii(int);
int	ft_isprint(int);
int	ft_strlen(char[]);
char*	ft_memset(char*, char, int);
void	ft_bzero(char *str, int n);
char	*ft_memcpy(char*, char*, int);
int	ft_strlcpy(char *dst, char *src, int len);
*/
int	main(void)
{
	/*
	char test = 'o';
	int	charint = 100;
	int	itest = 5;
	char str[20] = "12345678";
	char	src[50] = "bbbb aaaa aaaa bbbb";
	char	src2[50] = "bbbb aaaa aaaa bbbb";
	char	dest[50] = "aaaa bbbb aaaa bbbb";
	char	dest2[50] = "aaaa bbbb aaaa bbbb";
	int		n = 5;
	int		n2 = 5;
	int		len = 23;
	*/

//	if(ft_isalpha(test) == 0)
//		printf("it is not alpha");
//	else
//		printf("it is alpha");

/*
	 if(ft_isdigit(test) == 0)
	 printf("it is not digit");
     else
	 printf("it is digit");
*/
/*	 
	 if(ft_isalnum(test) == 0)
	 printf("it is not alnunm");
     else
	 printf("it is alnum");
*/
/*
	 if(ft_isascii(test) == 0)
	 printf("it is not ascii");
     else
	 printf("it is ascii");
*/
/*

	if(ft_isprint(itest) == 0)
		printf("it is not printable");
    else
		printf("it is printable");
*/
//	printf("string length = %d", ft_strlen(str));
//	printf("original = %s\n", str);

//	ft_memset(str, charint, len);
//	printf("memed = %s\n", str);
//	printf("before zero = %s\n", str);

//	ft_bzero(str, itest);
//	printf("after zero = %s\n", str);

//	printf("%s\n", dest);
//	ft_memcpy(dest, src, n);
//	printf("%s\n", dest);

//	printf("%s\n", dest2);
//	memcpy(dest2, src2, n2);
//	printf("%s\n", dest2);
/*
	printf("source is = %s\n", src);
	printf("dest = %s\n", dest);
	ft_strlcpy(dest, src, len);
	printf("modified dest = %s\n", dest);
*/
//	printf("%s\n", ft_memmove(src, src+3, len));
//	printf("%s\n", memmove(src2, src2+3, len));	
//	printf("%s\n", ft_memcpy(dest+5, dest, len));
//	printf("%s\n", memcpy(dest2+5, dest2, len));
	char	dst[50] = "";
	char	src[50] = "hdhfd";
	char	dst2[50] = "";
	char	src2[50] = "hdhfd";
	int		len = 40;
	printf("FT function = %zu\n", ft_strlcat(dst, src, len));
	printf("string = %s\n", dst);
	printf("OG function = %zu\n", strlcat(dst2, src2, len));
	printf("string = %s\n", dst);
}
