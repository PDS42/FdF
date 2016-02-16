/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:29:38 by prichard          #+#    #+#             */
/*   Updated: 2016/01/01 17:10:51 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mmr;

	mmr = (void *)malloc(size);
	if (mmr && size)
	{
		ft_bzero(mmr, size);
		return ((char *)mmr);
	}
	return (NULL);
}
