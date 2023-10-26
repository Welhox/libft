/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:16:56 by clundber          #+#    #+#             */
/*   Updated: 2023/10/26 17:57:38 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	int	si;
	int	di;
	int	len;

	di = 0;
	si = 0;
	while (dst[di])
		di++;
	while (src[si])
		si++;
	len = (di + si);
	si = 0;
	while (src[si] && (dstsize -1) > si)
		dst[di++] = src[si++];
	dst[di] = '\0';
	return (len);
}
