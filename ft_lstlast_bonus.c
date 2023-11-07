/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:34:35 by clundber          #+#    #+#             */
/*   Updated: 2023/11/07 11:57:08 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)

{
	t_list	*ptr;

	ptr = NULL;
	if (!lst)
		return (0);
	ptr = lst;
	while ((ptr->next) != '\0')
		ptr = ptr->next;
	return (ptr);
}
