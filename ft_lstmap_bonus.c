/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber <clundber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:06:06 by clundber          #+#    #+#             */
/*   Updated: 2023/11/08 16:37:17 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list *new_list;
	t_list *new_list_ptr;
	t_list *ptr;

	new_list = NULL;
	//new_list = malloc(sizeof(t_list));
	ptr = lst;
	new_list_ptr = new_list;
	while (lst)
	{
		f(lst->content);
		ft_lstadd_back(&new_list, ft_lstnew(lst->content));
		//new_list = new_list->next;
		ptr = lst->next;
		del(lst->content);	
		free (lst);
		lst = ptr;
	}
/*  	while (lst)
	{
		ptr = ptr->next;
		if(!(f(lst->content)))
		{
			del(lst->content);	
			free (lst);
		} 
		else
		{
			new_list = malloc(sizeof(t_list));
			new_list->content = lst->content;
			new_list->next = ptr;
			del(lst->content);	
			free (lst);
		}
		lst = ptr;
	}  */
	return (new_list_ptr);
}
