/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 15:39:03 by prichard          #+#    #+#             */
/*   Updated: 2016/02/16 11:47:15 by prichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include "fdf.h"

int		close_win(int keycode, void *param)
{
	param = NULL;
	if (keycode == ESC_KEY)
		exit(-1);
	else
		return (0);
}

int	main(void)
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "mlx 42");
	y = 50;
	while (y < 250)
	{
		x = 50;
		while (x < 350)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFF00FF);
			x++;
		}
		y++;
	}
	mlx_key_hook(win, close_win, 0);
	mlx_loop(mlx);
	return (0);
}
