/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 15:39:03 by prichard          #+#    #+#             */
/*   Updated: 2016/03/11 14:17:30 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include "fdf.h"

int		ft_close_win(int keycode, void *param)
{
	param = NULL;
	if (keycode == ESC_KEY)
		exit(-1);
	else
		return (0);
}

int	main(void)
{
	t_env	env;
	int		x;
	int		y;

	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 1000, 1000, "test boyz");
	y = 10;
	while (y < 390)
	{
		x = 10;
		while (x < 390)
		{
			mlx_pixel_put(env.mlx, env.win, x, y, 0x00FFFF);
			x++;
		}
		y++;
	}
	mlx_key_hook(env.win, ft_close_win, 0);
	mlx_loop(env.mlx);
	return (0);
}
