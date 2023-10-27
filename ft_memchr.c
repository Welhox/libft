/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:56:26 by clundber          #+#    #+#             */
/*   Updated: 2023/10/27 15:28:13 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sptr;
	char		needle;

	needle = c;
	sptr = s;
	while (sptr && n > 0)
	{
		if (*sptr == needle)
			return ((void *)sptr);
		sptr++;
		n--;
	}
	return (0);
}
