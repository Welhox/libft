/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:16:56 by clundber          #+#    #+#             */
/*   Updated: 2023/11/01 11:25:44 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	si;
	size_t	di;
	size_t	len;

	di = 0;
	while (dst[di] && di < dstsize -1)
		di++;
	si = ft_strlen(src);
	len = (di + si);
	if (dstsize == 0 || dst[di] != '\0')
		return (si + dstsize);
	si = 0;
	while (src[si] && di < dstsize -1)
		dst[di++] = src[si++];
	dst[di] = '\0';
	return (len);
}
