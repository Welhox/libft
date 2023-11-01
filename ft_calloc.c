/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:15:11 by welhox            #+#    #+#             */
/*   Updated: 2023/11/01 15:10:03 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)

{
	char	*ptr;
	size_t	i;

	i = 4294967295 / nmemb;
	if (size > i)
		return (0);
	i = 0;
	if (nmemb * size > 2147483424)
		return (0);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	while (i < (nmemb * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
