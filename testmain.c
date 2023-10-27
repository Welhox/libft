/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:33:40 by clundber          #+#    #+#             */
/*   Updated: 2023/10/27 18:41:44 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"
#include<stdlib.h>
#include<ctype.h>
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
/*	char	dst[50] = "";
	char	src[50] = "hdhfd";
	char	dst2[50] = "";
	char	src2[50] = "hdhfd";
	int		len = 40;
	printf("FT function = %zu\n", ft_strlcat(dst, src, len));
	printf("string = %s\n", dst);
	printf("OG function = %zu\n", strlcat(dst2, src2, len));
	printf("string = %s\n", dst);
*/
//char	c = '9';
//printf("FT = %c\n", ft_toupper(c));
//printf("OG = %c\n", toupper(c));

//char	c = '0';
//printf("FT = %c\n", ft_tolower(c));
//printf("OG = %c\n", tolower(c));

//char needle = 'q';
//const char stack[22] = "is it here?";

//printf("FT = %s\n", ft_strchr(stack, needle));
//printf("OG = %s\n", strchr(stack, needle));

//char needle = '\0';
//const char stack[22] = "is it here?";

//printf("FT = %s\n", ft_strrchr(stack, needle));
//printf("OG = %s\n", strrchr(stack, needle));

//const char s1[50] = "aaaaaa";
//const char s2[50] = "aaaacaa";
//int s1[] = {1,2,3,4};
//int s2[] = {1,2,3,10};
//int	n = 300;
//	printf("OG = %d\n", strncmp(s1, s2, n));
//	printf("FT = %d\n", ft_strncmp(s1, s2, n));
//	printf("OG = %d\n", memcmp(s1, s2, n));
//	printf("FT = %d\n", ft_memcmp(s1, s2, n));

//const char s[50] = "aaaaaaaaabaaaaa";
//int c = '\0';
//int	n = 20;
//	printf("OG = %s\n", memchr(s, c, n));
//	printf("FT = %s\n", ft_memchr(s, c, n));

//const char stack[50] = "This is stack, filled with hay";
//const char needle[50] = "with";
//int	n = 50;

//	printf("OG = %s\n", strnstr(stack, needle, n));
//	printf("FT = %s\n", ft_strnstr(stack, needle, n));

const char str[] = "-fdsdsf";

printf("OG = %d\n", atoi(str));
printf("FT = %d\n", ft_atoi(str));


}
