/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 16:11:48 by prichard          #+#    #+#             */
/*   Updated: 2016/03/09 18:27:49 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

static int		check_and_stock(char **line, char *begin)
{
	char			*new;

	new = ft_strchr(begin, '\n');
	if (new != NULL)
	{
		*new = '\0';
		*line = ft_strdup(begin);
		++new;
		ft_memmove(begin, new, ft_strlen(new) + 1);
		return (1);
	}
	if (ft_strlen(begin) > 0)
	{
		*line = ft_strdup(begin);
		*begin = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(int fd, char **line)
{
	static char		*begin = NULL;
	char			buffer[BUFF_SIZE + 1];
	char			*tmp;
	int				ret;

	if (!line || fd < 0)
		return (-1);
	if (begin == NULL)
		begin = ft_strnew(0);
	while (!ft_strchr(begin, '\n'))
	{
		ret = read(fd, buffer, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		if (ret == 0)
			return (check_and_stock(line, begin));
		buffer[ret] = '\0';
		tmp = ft_strjoin(begin, buffer);
		ft_strdel(&begin);
		begin = tmp;
	}
	return (check_and_stock(line, begin));
}

/*int	main(int ac, char **av)*/
/*{*/
	/*int		fd;*/
	/*char	*line;*/

	/*fd = open(av[1], O_RDONLY);*/
	/*if (ac == 2)*/
	/*{*/
		/*while (get_next_line(fd, &line) > 0)*/
			/*ft_putendl(line);*/
	/*}*/
	/*return (0);*/
/*}*/
