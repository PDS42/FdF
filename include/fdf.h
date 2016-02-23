/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 16:10:23 by prichard          #+#    #+#             */
/*   Updated: 2016/02/23 17:27:56 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define ESC_KEY 53
# include "libft.h"
# include "mlx.h"

typedef struct	s_env
{
	void	*mlx;
	void	*win;
}				t_env;

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
}				t_map;

#endif
