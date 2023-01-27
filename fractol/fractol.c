/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:37:36 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/27 16:57:31 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_map(char *type, t_map *fractol)
{
	fractol->mlx_win = mlx_new_window(fractol->mlx, WIDTH, HEIGHT, "FRACTOL");
	fractol->img = mlx_new_image(fractol->mlx, WIDTH, HEIGHT);
	fractol->addr = mlx_get_data_addr(fractol->img, &fractol->bits_per_pixel, \
			&fractol->line_length, &fractol->endian);
}

void	my_mlx_pixel_put(t_map *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	close_esc(int keycode, t_map *vars)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->mlx_win);
		exit(0);
	}
	return (0);
}

int close_x(int x_clicked, t_map *vars)
{

	mlx_destroy_window(vars->mlx, vars->mlx_win);
	exit(0);
	return (0);
}
