/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:52:28 by prichard          #+#    #+#             */
/*   Updated: 2015/12/03 15:25:54 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *p1;
	char *p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	if (ft_strncmp(p1, p2, n) == 0)
		return (1);
	else
		return (0);
}
