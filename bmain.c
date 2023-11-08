/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:33 by clundber          #+#    #+#             */
/*   Updated: 2023/11/08 16:42:56 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)

{
	t_list nd1, nd2;

	char *p = "Hello";
	nd1.content = "hella";
	nd2 = *ft_lstnew(p);
	nd1.next = &nd2; 

	printf("%s\n", nd2.content); 

}