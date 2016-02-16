/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:09:02 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 15:13:01 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(int nb)
{
	int			i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static int		ft_nbrsign(int nb)
{
	if (nb < 0)
		return (1);
	else
		return (0);
}

static int		ft_abs(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		return (nb);
	}
	return (nb);
}

char			*ft_itoa(int n)
{
	int			nlen;
	int			sign;
	char		*str;

	nlen = ft_nbrlen(n);
	sign = ft_nbrsign(n);
	if (!(str = (char *)malloc(sizeof(char) * (nlen + sign + 1))))
		return (NULL);
	if (str)
	{
		str = str + nlen + sign;
		*str = '\0';
		if (n < 0)
			n = -n;
		if (n == 0)
			*--str = '0';
		while (n != 0)
		{
			*--str = ft_abs(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--str = '-';
	}
	return (str);
}
