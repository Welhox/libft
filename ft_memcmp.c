/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:30:33 by clundber          #+#    #+#             */
/*   Updated: 2023/10/27 15:48:15 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	int			i;
	const char	*s1ptr;
	const char	*s2ptr;

	i = 0;
	s1ptr = s1;
	s2ptr = s2;
	while (s1ptr[i] && s2ptr[i] && n > 0)
	{
		if (s1ptr[i] != s2ptr[i])
			return (s1ptr[i] - s2ptr[i]);
		i++;
		n--;
	}
	return (0);
}
