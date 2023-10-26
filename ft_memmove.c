/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:04:54 by clundber          #+#    #+#             */
/*   Updated: 2023/10/26 14:36:41 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)

{	
	char		*dstptr;
	const char	*srcptr;
	int			i;
	//char		buffer[len];

	srcptr = src;
	dstptr = dst;
	i = 0;
	if (&dstptr > &srcptr)
		while (len > 0)
		{
			dstptr[len-1] = srcptr[len-1];
			len--;
		}
	else if (&dst <= &src)
		while (len > 0)
		{
			*dstptr = *srcptr;
			dstptr++;
			srcptr++;
			len--;
		}

	// what if the same starting point?
	/*
	while (len > 0)
	{
		buffer[i] = *srcptr;
		i++;
		len--;
		srcptr++;
	}
	while (i > 0)
	{
		*dstptr = buffer[len];
		len++;
		i--;
		dstptr++;
	}
	*/
	return (dst);
}
