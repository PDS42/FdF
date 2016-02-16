/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:46:22 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 16:08:55 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*maillon;

	if (!(maillon = (t_list *)malloc(sizeof(*maillon))))
		return (NULL);
	if (content == NULL)
	{
		maillon->content = NULL;
		maillon->content_size = 0;
	}
	else
	{
		if (!(maillon->content = (void *)malloc(content_size)))
			return (NULL);
		else
		{
			ft_memcpy(maillon->content, content, content_size);
			maillon->content_size = content_size;
		}
	}
	maillon->next = NULL;
	return (maillon);
}
