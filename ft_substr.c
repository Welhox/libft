/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:43:47 by welhox            #+#    #+#             */
/*   Updated: 2023/10/30 13:59:28 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)

{
    int i;
    char *substr;
    
    i = 0;
    substr = (char*) malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    while (s[start] && len > 0)
    {
        substr[i++] = s[start++];
        len--;
    }
        substr[i] = '\0';
    return (substr);
}
