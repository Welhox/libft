/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:17:10 by welhox            #+#    #+#             */
/*   Updated: 2023/10/31 10:35:47 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)

{
   // char *str;
    int i;
    int start;
    int len;
    int j;
    int set_len;

    j = 0;
    i = 0;
    start = 0;
    len = ft_strlen(s1);
    set_len = ft_strlen(set);
    while (s1[i] == set[i])
    {   
        i++;
        if (set[i] == '\0')
            start = i; 
    }
    while (s1[len -set_len +j] == set[j])
    {  
        j++;
        if (set[j] == '\0')
            len -= j;
    }
    /*
    while (s1[start] && set[i])
    {
            if (set[i] == s1[start])
            {
               i = -1;
               start++;
            }
        i++;
    }
    i = 0;
    */
    //printf("start = %d\n", start);
    /*
        while (s1[len -1] && set[i])
    {
            if (set[i] == s1[len -1])
            {
               i = -1;
               len--;
            }
        i++;
    }
    */
    //printf("len = %d\n", len);
    return(ft_substr(s1, start, (len - start)));
    /*
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
    */
   // return (str);
}