/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:10:59 by clundber          #+#    #+#             */
/*   Updated: 2023/11/04 13:06:52 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_arrayadd(char const *s, int start, int len)

{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc(sizeof (char) * (len +1));
	if (!str)
		return (0);
	while (len > 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_strcount(char const *s, char c)

{
	int	stringcount;
	int	i;

	i = 0;
	stringcount = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			stringcount++;
			while ((s[i] != c && s[i] != '\0'))
				i++;
		}
	}
	return (stringcount);
}

static void	ft_arraymaker(char **array, int iarr, char const *s, char c)

{
	size_t	i;
	size_t	start;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			array[iarr++] = ft_arrayadd(s, start, (i - start));
		}
	}
	array[iarr] = (void *)0;
}

char	**ft_split(char const *s, char c)

{
	char	**array;
	int		iarr;

	iarr = 0;
	if (!s)
		return (0);
	array = (char **) malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (!array)
		return (0);
	ft_arraymaker(array, iarr, s, c);
	return (array);
}
