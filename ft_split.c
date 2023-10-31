/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:10:59 by clundber          #+#    #+#             */
/*   Updated: 2023/10/31 16:13:10 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	**ft_split(char const *s, char c)

{
	char			**array;
	size_t			i;
	unsigned int	idel;
	int				iarr;
	int				strnumber;

	i = 0;
	iarr = 0;
	idel = 0;
	strnumber = 1;
	while (s[i])
	{
		if (s[i] == c)
			strnumber++;
		i++;
	}
	i = 0;
	array = (char **) malloc(sizeof(char) * (strnumber *ft_strlen(s) + 1));
	while (s[i])
	{
		if (s[i] == c || s[i +1] == '\0')
		{
			array[iarr] = ft_substr(s, idel, (i - idel));
			idel = i +1;
			iarr++;
		}
		i++;	
	}
	array[iarr] = NULL;
	printf("%s\n", array[0]);
	return (array);
}