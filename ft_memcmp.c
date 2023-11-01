/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:30:33 by clundber          #+#    #+#             */
/*   Updated: 2023/11/01 12:12:50 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*s1ptr == *s2ptr && n > 0)
	{
		s1ptr++;
		s2ptr++;
		n--;
	}
	if (n == 0 && *s1ptr-- == *s2ptr--)
		return (0);
	if (*s1ptr != *s2ptr)
		return (*s1ptr - *s2ptr);
	return (0);
}
