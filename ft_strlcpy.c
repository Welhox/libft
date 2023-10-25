/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:57:47 by clundber          #+#    #+#             */
/*   Updated: 2023/10/25 18:51:16 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (dst == NULL)
		return (len);
	while (dstsize > 0 && *dst != '\0' && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;

	}
	*dst = '\0';
	return (len);
}