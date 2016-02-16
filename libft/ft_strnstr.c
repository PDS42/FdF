/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:33:34 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 14:52:32 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		size;

	size = ft_strlen(s2);
	while (*s1 && n > 0)
	{
		if (!(ft_memcmp(s1, s2, size)) && size <= n)
			return ((char*)s1);
		s1++;
		n--;
	}
	return (0);
}
