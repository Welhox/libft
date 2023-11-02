/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:17:10 by welhox            #+#    #+#             */
/*   Updated: 2023/11/02 10:20:27 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[len -1] && set[i])
	{
		if (set[i] == s1[len -1])
		{
			i = -1;
			len--;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)

{
	int	i;
	int	start;
	int	len;

	i = 0;
	start = 0;
	len = ft_length(s1, set);
	if (!s1)
		return (0);
	while (s1[start] && set[i])
	{
		if (set[i] == s1[start])
		{
			i = -1;
			start++;
		}
		i++;
	}
	if (start > len)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (len - start)));
}
