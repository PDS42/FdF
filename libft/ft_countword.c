/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <prichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 09:52:50 by prichard          #+#    #+#             */
/*   Updated: 2015/12/04 14:12:47 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_countword(char const *str, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 1;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
			count++;
		i++;
	}
	return (count);
}
