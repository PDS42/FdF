/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 16:05:13 by prichard          #+#    #+#             */
/*   Updated: 2016/03/15 13:40:26 by prichard         ###   ########.fr       */
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

t_map	ft_read(char *filename)
{
	int			fd;
	char		*line;
	char		**tab;
	t_index		index;
	t_map		grid;

	index.j = 0;
	grid.nb_lines = count_lines(filename);
	grid.tab = (int **)ft_memalloc(sizeof(int *) * count_lines(filename));
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		grid.nb_col = count_col(line); //attention ne fonctionne que pour les maps rectangle (prend la valeur de la derniere line)
		grid.tab[index.j] = (int *)ft_memalloc(sizeof(int) * count_col(line));
		tab = ft_strsplit(line, ' ');
		index.i = 0;
		while (tab[index.i])
		{
			grid.tab[index.j][index.i] = ft_atoi(tab[index.i]);
			index.i++;
		}
		index.j++;
	}
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
