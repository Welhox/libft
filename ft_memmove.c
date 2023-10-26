/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:54 by clundber          #+#    #+#             */
/*   Updated: 2023/10/26 15:28:01 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char		*dstptr;
	const char	*srcptr;

	srcptr = src;
	dstptr = dst;
	if (dstptr > srcptr)
	{
		while (len > 0)
		{
			dstptr[len -1] = srcptr[len -1];
			len--;
		}
	}
	else if (dst <= src)
	{
		while (len > 0)
		{
			*dstptr = *srcptr;
			dstptr++;
			srcptr++;
			len--;
		}
	}
	return (dst);
}
