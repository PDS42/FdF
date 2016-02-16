/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 09:12:18 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 10:39:34 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*chain;
	t_list	*next;

	chain = *alst;
	while (chain)
	{
		next = chain->next;
		del(chain->content, chain->content_size);
		free(chain);
		chain = next;
	}
	*alst = NULL;
}
