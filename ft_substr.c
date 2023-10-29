/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:43:47 by welhox            #+#    #+#             */
/*   Updated: 2023/10/29 18:21:30 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)

{
    int i;
    char *substr;
    
    substr = malloc (sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    while (s[start] && len > 0)
    {
        substr[i++] = s[start++];
        len--;
    }
    return (substr);
}
