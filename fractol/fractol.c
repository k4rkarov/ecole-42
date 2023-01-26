/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:37:36 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/26 15:56:59 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_map(char *type, t_map *fractol)
{
	fractol->mlx_win = mlx_new_window(fractol->mlx, 1920, 1080, "FRACTOL");
	fractol->img = mlx_new_image(fractol->mlx, 1920, 1080);
	fractol->addr = mlx_get_data_addr(fractol->img, &fractol->bits_per_pixel, &fractol->line_length, &fractol->endian);
}

void	my_mlx_pixel_put(t_map *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	close_win(int keycode, t_map *vars)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->mlx_win);
		exit(0);
	}
	return (0);
}

int	main(int argc, char **argv)
 {
	t_map	fractol;
	int	i = -1;

	fractol.mlx = mlx_init();
	draw_map(argv[1], &fractol);
	my_mlx_pixel_put(&fractol, 500, 501, 0x0000FF00);
	mlx_put_image_to_window(fractol.mlx, fractol.mlx_win, fractol.img, 0, 0);
	mlx_hook(fractol.mlx_win, 2, 1L<<0, close_win, &fractol);
	mlx_loop(fractol.mlx);
	return (0);
 }
