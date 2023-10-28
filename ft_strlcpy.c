/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:57:47 by clundber          #+#    #+#             */
/*   Updated: 2023/10/28 23:32:44 by welhox           ###   ########.fr       */
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
	if (dstsize == 0)
		return (len);
	while (dstsize > 0 && *dst + 1 != '\0' && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	if (dstsize == 0)
		dst--;
	*dst = '\0';
	return (len);
}
