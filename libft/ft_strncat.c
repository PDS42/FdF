/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:11:30 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 15:27:46 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr1;

	ptr1 = s1;
	while (*ptr1)
		ptr1++;
	while (*s2 && n > 0)
	{
		*ptr1 = *s2;
		ptr1++;
		s2++;
		n--;
	}
	*ptr1 = '\0';
	return (s1);
}
