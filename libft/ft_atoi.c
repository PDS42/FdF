/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:57:21 by prichard          #+#    #+#             */
/*   Updated: 2015/12/20 13:37:04 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		sign;
	int		result;
	char	*pos;

	pos = (char *)str;
	sign = 1;
	result = 0;
	while (*pos == ' ' || *pos == '\t' || *pos == '\n' ||
		*pos == '\v' || *pos == '\f' || *pos == '\r')
		pos++;
	sign = (*pos == '-' ? -1 : 1);
	pos = (*pos == '-' || *pos == '+' ? pos + 1 : pos);
	while (*pos >= '0' && *pos <= '9')
	{
		result = (result * 10) + (*pos - 48);
		pos++;
	}
	return (sign * result);
}
