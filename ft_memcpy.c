/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:57:59 by clundber          #+#    #+#             */
/*   Updated: 2023/10/28 22:41:57 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dstptr;
	const char	*srcptr;

	dstptr = dst;
	srcptr = src;
	while (n > 0)
	{
		*dstptr = *srcptr;
		dstptr++;
		srcptr++;
		n--;
	}
	return (dst);
}
