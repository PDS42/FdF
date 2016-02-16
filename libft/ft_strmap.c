/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:02:23 by prichard          #+#    #+#             */
/*   Updated: 2015/12/03 15:22:33 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(sizeof(*p) * (ft_strlen(s) + 1));
	if (p)
	{
		while (s[i])
		{
			p[i] = f(s[i]);
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
