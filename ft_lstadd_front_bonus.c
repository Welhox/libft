/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:40:55 by clundber          #+#    #+#             */
/*   Updated: 2023/11/07 11:56:44 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)

{
	t_list	*temp;

	if (lst && new)
	{
		temp = *lst;
		*lst = new;
		new->next = temp;
	}
}
