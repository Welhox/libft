/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:10:59 by clundber          #+#    #+#             */
/*   Updated: 2023/11/02 15:15:32 by clundber         ###   ########.fr       */
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
	{
		free (str);
		return (0);
	}
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
	stringcount = 1;
	while (s[i])
	{
		if ((s[i] == c || s[i] == '\0') && (s[i -1] != c))
			stringcount++;
		i++;
	}
	return (stringcount);
}

char	**ft_split(char const *s, char c)

{
	char	**array;
	size_t	i;
	size_t	start;
	int		iarr;

	i = 0;
	iarr = 0;
	if (!s)
		return (0);
	array = (char **) malloc(sizeof(char *) * (ft_strcount(s, c) + 1));
	if (!array)
		return (0);
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
	return (array);
}
