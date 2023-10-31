/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:03:04 by clundber          #+#    #+#             */
/*   Updated: 2023/10/30 17:56:45 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)

{
	char	*str;
	char 	*temp;
	int		i;
	int		j;
	long int integer;

	integer = n;
	j = 0;
	i = 0;
	temp = (char*) malloc(12 * sizeof (char));
	str = (char*) malloc(12 * sizeof (char));
	if (integer == 0)
	{
		str[0] = '0';
		return (str);
	}
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
	return(str);
}