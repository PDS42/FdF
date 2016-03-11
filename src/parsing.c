/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 16:05:13 by prichard          #+#    #+#             */
/*   Updated: 2016/03/11 15:50:18 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int		count_col(char *line)
{
	t_index	index;
	char	**tab;

	index.i = 0;
	tab = ft_strsplit(line, ' ');
	while (tab[index.i])
		index.i++;
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
	return (index.i);
}

t_map	iso_convert(t_map grid)
{
	t_index		ind;
	
	ind.j = 0;
	grid.conv = (t_coord**)ft_memalloc(sizeof(t_coord *) * grid.height);
	while (ind.j < grid.height)
	{
		grid.conv[ind.j] = (t_coord *)ft_memalloc(sizeof(t_coord) * grid.width);
		ind.i = 0;
		while (ind.i < grid.width)
		{
			grid.conv[ind.j][ind.i].x = ind.i;
			grid.conv[ind.j][ind.i].y = grid.map[ind.j][ind.i] + ind.j;
		   /* ft_putnbr(grid.conv[ind.j][ind.i].x);*/
			/*ft_putchar('-');*/
			/*ft_putnbr(grid.conv[ind.j][ind.i].y);*/
			/*ft_putchar('|');*/
			ind.i++;
		}
		/*ft_putchar('\n');*/
		ind.j++;
	}
	return (grid);
}

t_map	ft_read(char *filename)
{
	int			fd;
	char		*line;
	char		**tab;
	t_index		index;
	t_map		grid;

	index.j = 0;
	grid.height = count_lines(filename);
	grid.map = (int **)ft_memalloc(sizeof(int *) * count_lines(filename));
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		grid.width = count_col(line); //attention ne fonctionne que pour les maps rectangle (prend la valeur de la derniere line)
		grid.map[index.j] = (int *)ft_memalloc(sizeof(int) * count_col(line));
		tab = ft_strsplit(line, ' ');
		index.i = 0;
		while (tab[index.i])
		{
			grid.map[index.j][index.i] = ft_atoi(tab[index.i]);
			index.i++;
		}
		index.j++;
	}
	iso_convert(grid);
	return (grid);
}

/*int		main(int ac, char **av)*/
/*{*/
	/*if (ac == 2)*/
	/*{*/
		/*ft_read(av[1]);*/
		/*return (0);*/
	/*}*/
	/*return (0);*/
/*}*/
