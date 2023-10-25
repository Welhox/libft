/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:08:50 by clundber          #+#    #+#             */
/*   Updated: 2023/10/25 17:13:40 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *ptr;

	ptr = str;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (str);
}
