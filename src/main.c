/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 17:47:59 by prichard          #+#    #+#             */
/*   Updated: 2016/03/15 13:49:53 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_close_win(int keycode, void *param)
{
	param = NULL;

	if (keycode == 53)
		exit (-1);
	else
		return (0);
}

static t_mlx	mlx_start(int height, int width, char *filename)
{
	t_mlx	env;

	env.ptr = mlx_init();
	env.win = mlx_new_window(env.ptr, height, width, name);
	env.win_height = height;
	env.win_width = width;
	return (env);
}

int		main(int ac, char **av)
{
	t_mlx	mlx;
	t_map	map;
	t_img	img;

	if (ac == 2)
	{
		map = ft_read(av[1]);
		mlx = mlx_start(1000, 1000, av[1]);
		iso_view(map);
		img = final_draw(mlx, map);
		mlx_put_image_to_window(mlx.mlx_ptr, mlx.win, img.img_ptr, 0, 0);
		mlx_key_hook(mlx.win, ft_close_win);
		mlx_loop(img.img_ptr);
	}
	return (0);
}
