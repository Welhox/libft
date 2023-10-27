/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:38:18 by clundber          #+#    #+#             */
/*   Updated: 2023/10/27 18:50:29 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	int	i;
	int	ii;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len--)
	{
		ii = 0;
		while (needle[ii] == haystack[i + ii] && (len - ii) > 0)
		{
			ii++;
			if (needle[ii] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
