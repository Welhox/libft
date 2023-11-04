/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:03:04 by clundber          #+#    #+#             */
/*   Updated: 2023/11/04 13:56:49 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strmaker(char *str, long int integer, int i, int j)

{
	char	*temp;

	temp = (char *) malloc(12 * sizeof (char));
	if (integer < 0)
	{
		str[i] = '-';
		integer *= -1;
		i++;
	}
	while (integer > 0)
	{
		temp[j] = (integer % 10 + 48);
		integer /= 10;
		j++;
	}
	temp[j] = '\0';
	j--;
	while (j >= 0)
		str[i++] = temp[j--];
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)

{
	char		*str;
	int			i;
	int			j;
	long int	integer;

	integer = n;
	j = 0;
	i = 0;
	str = (char *) malloc(12 * sizeof (char));
	if (!str)
		return (0);
	if (integer == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = ft_strmaker(str, integer, i, j);
	return (str);
}
