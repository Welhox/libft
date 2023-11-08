/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:06:06 by clundber          #+#    #+#             */
/*   Updated: 2023/11/08 22:40:18 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	printf("1\n");
	t_list *new_list;
	t_list *new_list_ptr;
	t_list *ptr;
	t_list *prev;

	new_list = NULL;
	ptr = NULL;
	printf("5\n");
	//ptr = lst;
	//(*f)((char*)ptr->content);

	new_list = ft_lstnew(f(lst->content));
		printf("6");
	prev = ptr;
	ptr = lst->next;
	(*del)(prev->content);
	printf("2\n");
	new_list_ptr = new_list;
	printf("3\n");
	free (prev);
	//lst = ptr; 
	printf("4\n");
	while (ptr)
	{
		f(lst->content);
		ft_lstadd_back(&new_list, ft_lstnew(lst->content));
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
