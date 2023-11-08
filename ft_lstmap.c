/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:59:47 by welhox            #+#    #+#             */
/*   Updated: 2023/11/08 23:25:08 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
    t_list  *new_list;
    t_list  *temp;
    t_list  *ptr;

    new_list = NULL;
    while (lst)
    {
        temp = ft_lstnew((*f)(lst->content))
        ptr = lst;
        (*del)(lst->content);
        lst = lst->next;
        free (ptr);
        ft_lstadd_back(&new_list, temp);
    }
    return(new_list);

}