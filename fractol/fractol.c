/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:37:36 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/27 19:03:47 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_map(t_map *fractol)
{
	fractol->mlx = mlx_init();
	fractol->mlx_win = mlx_new_window(fractol->mlx, WIDTH, HEIGHT, "FRACTOL");
	fractol->img = mlx_new_image(fractol->mlx, WIDTH, HEIGHT);
	fractol->addr = mlx_get_data_addr(fractol->img, &fractol->bits_per_pixel, \
			&fractol->line_length, &fractol->endian);
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

int	close_x(t_map *vars)
{
	mlx_destroy_window(vars->mlx, vars->mlx_win);
	exit(0);
	return (0);
}

void	error_check(t_map *vars, int argc, char **argv)
{
	if (argc > 1 && argc < 3)
	{
		if (ft_strncmp(argv[1], "julia", 5) == 0 && argc == 2)
		{
			vars->fractype = 'j';
			printf("\e[1;32mrendering julia...\e[0;0m\n");
			return ;
		}
		else if (ft_strncmp(argv[1], "mandelbrot", 10) == 0 && argc == 2)
		{
			vars->fractype = 'm';
			printf("\e[1;32mrendering mandelbrot...\e[0;0m\n");
			return ;
		}
		else
		{
			printf("\n\e[1;31mINVALID OPTION!\e[0;0m\n \
					Usage:\n./fractol.o julia\n./fractol.o mandelbrot\n\n");
			exit(0);
		}
	}
	else
	{
		printf("\n\e[1;31mINVALID OPTION!\e[0;0m\n \
				Usage:\n./fractol.o julia\n./fractol.o mandelbrot\n\n");
		exit(0);
	}
}
