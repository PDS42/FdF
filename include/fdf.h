/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 16:10:23 by prichard          #+#    #+#             */
/*   Updated: 2016/02/16 17:13:12 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define ESC_KEY 53
# include "libft.h"

typedef struct	s_env
{
	void	*mlx;
	void	*window;
	int		height;
	int		length;
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
}				t_index;

#endif
