/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welhox <welhox@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:40:33 by clundber          #+#    #+#             */
/*   Updated: 2023/11/08 22:42:09 by welhox           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *content)
{
	free (content);
}

void	*ft_bonus(void *str)

{

 	int	i;
	char *ptr;

	ptr = (char*)str;
	i = 0;
	while (ptr[i])
	{
 		if (ptr[i] >= 97 && ptr[i] <= 122)
			ptr[i] -= 32;
		if (ptr[i] >= 65 && ptr[i] <= 90)
			ptr[i] += 32;
		i++; 
	}
}

int	main(void)

{

	t_list *head = malloc (sizeof(t_list));
	head->content = "Let the sun shine";
	head->next = NULL;

	t_list *current = malloc(sizeof(t_list));
	current->content = "The cake is a lie!";
	current->next = NULL;
	head->next = current;

	t_list	*head_ptr;
	head_ptr = head;

	while (head_ptr)
{
	printf("%s\n", (head_ptr->content));
	head_ptr = head_ptr->next;
}	
	

	t_list	*ptr;

	ptr = ft_lstmap(head, ft_bonus, del);

	head_ptr = ptr;

	while (head_ptr)
	{
		printf("%p\n", head_ptr->content);
		head_ptr = head_ptr->next;
	}	







}