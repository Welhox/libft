/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:04:40 by welhox            #+#    #+#             */
/*   Updated: 2023/10/29 17:29:02 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *s)

{
	int len;
    char *dupe;
    int i;

    i = 0;
	len = 0;
	while (s[len])
		len++;
    dupe = malloc ((len + 1) * sizeof(char));
    while (len >= 0)
    {
    dupe[i] = s[i];
    i++;
    len--;
    }
    return (dupe);
}
