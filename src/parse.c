#include "libft.h"
#include "fdf.h"
#include <fcntl.h>
#include <stdlib.h>

int		count_col(char *filename)
{
	int		fd;
	t_index	ind;
	char	*line;
	char	**tab;

	fd = open(filename, O_RDONLY);
	if (get_next_line(fd, &line) <= 0)
		return (0);
	tab = ft_strsplit(line, ' ');
	ind.k = 0;
	while (tab[ind.k])
		ind.k++;	
	close(fd);
	return (ind.k);
}

int		count_lines(char *filename)
{
	int		fd;
	t_index	ind;
	char	*line;

	ind.k = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		ind.k++;
	close(fd);
	return (ind.k);
}

int		**ft_read(char *filename)
{
	int		fd;
	t_map	grid;
	char	**tab;
	t_index	ind;
	char	*line;

	fd = open(filename, O_RDONLY);
	ind.l = 0;
	grid.map = (int **)ft_memalloc(sizeof(int *) * count_lines(filename));
	while (get_next_line(fd, &line) > 0)
	{
		ind.k = 0;
		tab = ft_strsplit(line, ' ');
		while (tab[ind.k])
		{
			grid.map[ind.l] = (int *)ft_memalloc(sizeof(int) * count_col(filename));
			grid.map[ind.l][ind.k] = ft_atoi(tab[ind.k]);
			ft_putnbr(grid.map[ind.l][ind.k]);
			ft_putchar('|');
			ind.k++;
		}
		ft_putchar('\n');
		ind.l++;
	}
	return (grid.map);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_read(av[1]);
	}
	return (0);
}
