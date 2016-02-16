/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 16:05:13 by prichard          #+#    #+#             */
/*   Updated: 2016/02/16 18:20:29 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		count_col(int fd, char *line)
{
	t_coord	index;
	char	**tab;

	index.i = 0;
	get_next_line(fd, &line)
	tab = ft_strsplit(line, ' ');
	while (tab[index.i])
		index.i++;
	return(index.i);
}

int		count_line(char **tab)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (tab[i][j])
	{
		while (tab[i][j])
			i++;
		j++;
	}
	return (j);
}

char	**ft_read(char *filename)
{
	int		fd;
	char	*line;
	char	**tab;
	int		i;
	int		j;

	j = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putnbr(count_col(line, ' '));
		tab = ft_strsplit(line, ' ');
		i = -1;
		while (++i < count_col(line, ' '))
		{
			tab[i][j] = ft_atoi(tab[i]);
		}
		j++;
	}
	return (tab);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_read(av[1]);
		return (0);
	}
	return (0);
}
