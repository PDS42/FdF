/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 16:10:23 by prichard          #+#    #+#             */
/*   Updated: 2016/03/11 17:10:43 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define ESC_KEY 53
# define TILE_SIZE 32
# include "libft.h"
# include "mlx.h"

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
	int		win_hgth;
	int		win_wdth;
}				t_mlx;

typedef struct	s_coord
{
	int		x;
	int		y;
}				t_coord;

typedef struct s_index
{
	int		i;
	int		j;
	int		k;
}				t_index;

typedef struct s_map
{
	int		height;
	int		width;
	int		**map;
	t_coord	**conv;
}				t_map;

typedef struct s_math
{
	int		dx;
	int		dy;
	int		error;
	int		derror;
}

t_map	ft_read(char *filename);

#endif
