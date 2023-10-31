/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:54:20 by clundber          #+#    #+#             */
/*   Updated: 2023/10/31 14:10:44 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	char *str;
	int	i;
	int j;

	i = 0;
	j = 0;
	str = malloc(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		str[i] = f(1, s[i]);
		i++;
	}	
	return (str);
}
