/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:57:47 by clundber          #+#    #+#             */
/*   Updated: 2023/10/25 17:56:17 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
//	int	i;
//
//	i = 0;
//	while (dst[i] != '\0')
//		i++;
//	if (src == null)
//		return (i); 
//	while (src[i] != '\0' && len > 0)
	{
		*dst = src[i];
		dst++;
		i++;
		len--;
	}
	*dst = '\0';
	return (i);
}