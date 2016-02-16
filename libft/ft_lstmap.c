/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:04:43 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 19:03:39 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*temp_lst;
	t_list	*first_new_list;

	new_lst = NULL;
	while (lst)
	{
		temp_lst = f(lst);
		if (new_lst == NULL)
		{
			new_lst = (t_list*)malloc(sizeof(t_list));
			new_lst = temp_lst;
			first_new_list = new_lst;
			new_lst->next = NULL;
		}
		else
		{
			new_lst->next = (t_list*)malloc(sizeof(t_list));
			new_lst->next = temp_lst;
			temp_lst->next = NULL;
			new_lst = new_lst->next;
		}
		lst = lst->next;
	}
	return (first_new_list);
}
