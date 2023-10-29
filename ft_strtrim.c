/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:17:10 by welhox            #+#    #+#             */
/*   Updated: 2023/10/29 21:44:09 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)

{
    char *str;
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    str = malloc ((ft_strlen(s1) + 1 - (ft_strlen(set) * 2)) * sizeof(char));
    while (s1[i])
    {
        j = 0;
        while (s1[i + j] == set[j])
        {
            j++;
            if (set[j] == '\0' && (i != 0 || s1[i + j + 1] == '\0'))
                i += j;
        }
        str[k] = s1[i];
        i++;
        k++;
    }
    str[k] = '\0';
    return (str);
}