/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:57:59 by clundber          #+#    #+#             */
/*   Updated: 2023/10/24 17:15:08 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memcpy(char *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
