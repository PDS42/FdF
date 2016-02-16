/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:06:20 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 15:03:17 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (!(str = (char *)malloc(sizeof(str) * (int)len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s2[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		s1[i] = str[i];
		i++;
	}
	free(str);
	return ((void *)dst);
}
