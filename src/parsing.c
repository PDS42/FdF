/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 16:05:13 by prichard          #+#    #+#             */
/*   Updated: 2016/02/23 15:35:59 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		count_col(char *filename)
{
	t_index	index;
	int		fd;
	char	*line;
	char	**tab;

	index.i = 0;
	fd = open(filename, O_RDONLY);
	get_next_line(fd, &line);
	tab = ft_strsplit(line, ' ');
	while (tab[index.i])
		index.i++;
	close(fd);
	return(index.i);
}

int		count_lines(char *filename)
{
	t_index	index;
	int		fd;
	char	*line;

	index.i = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		index.i++;
	close(fd);
	return (index.i++);
}

t_map	ft_read(char *filename)
{
	int			fd;
	char		*line;
	char		**tab;
	t_map		grid;
	t_index		index;

	index.i = 0;
	grid.height = count_lines(filename);
	grid.width = count_col(filename);
	grid.map = (int **)ft_memalloc(sizeof(int *) * count_lines(filename));
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		grid.map[index.i] = (int *)ft_memalloc(sizeof(int) * count_col(filename));
		tab = ft_strsplit(line, ' ');
		index.j = 0;
		while (tab[index.j])
		{
			grid.map[index.i][index.j] = ft_atoi(tab[index.i]);
			index.j++;
		}
		index.i++;
	}
	return (grid.map);
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
