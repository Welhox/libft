/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:15:11 by welhox            #+#    #+#             */
/*   Updated: 2023/10/29 17:01:27 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)

{
    void    *ptr;
    unsigned int    totmem;

    totmem = nmemb * size;
    ptr = (void *)malloc (totmem);
    if (!ptr)
        return (NULL);
    while (totmem > 0)
	{
		ptr = (unsigned char *)'\0';
		ptr++;
		totmem--;
	}
    return ((void *)ptr);
}
