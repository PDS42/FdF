/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:50:01 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 15:21:52 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr(int nb)
{
	unsigned int	var;

	if (nb < 0)
	{
		var = -nb;
		ft_putchar('-');
	}
	else
		var = nb;
	if (var >= 10)
	{
		ft_putnbr(var / 10);
		ft_putnbr(var % 10);
	}
	else
	{
		ft_putchar(var + '0');
	}
}
