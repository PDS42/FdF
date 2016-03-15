/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 16:10:23 by prichard          #+#    #+#             */
/*   Updated: 2016/03/15 14:30:58 by prichard         ###   ########.fr       */
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
	void	*mlx_ptr;
	void	*win;
	int		win_height;
	int		win_width;
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
	int		nb_lines;
	int		nb_col;
	int		**tab;
	t_coord	**iso;
	t_coord	**array;
}				t_map;

typedef struct	s_img
{
	void	*img_ptr;
	void	*addr;
	int		*bpp;
	int		*size_line;
	int		*endian;
	int		mlx_width;
}				t_img;

typedef struct	s_math
{
	int		dx;
	int		dy;
	int		error;
	int		derror;
	int		steep;
	int		dot;
}				t_math;

t_map	ft_read(char *filename);
t_img	final_draw(t_mlx *mlx, t_map *map);
t_coord	**iso_view(t_map map);
void	draw_lines(t_img *img, t_coord a, t_coord b, int color);

#endif
