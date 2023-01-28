/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:37:36 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/28 15:06:13 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	open_win(t_map *fractol)
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
		fractalen(vars, argc, argv);
	else
	{
		ft_printf("\n\e[1;31mINVALID OPTION!\e[0;0m\njulia1,2,3\nmandelbrot\n\n");
		exit(0);
	}
}

void	fractalen(t_map *vars, int argc, char **argv)
{
	if (ft_strncmp(argv[1], "julia1", 7) == 0 && argc == 2)
	{
		vars->fractype = 'j';
		return ;
	}
	if (ft_strncmp(argv[1], "julia2", 7) == 0 && argc == 2)
	{
		vars->fractype = '2';
		return ;
	}
	if (ft_strncmp(argv[1], "julia3", 7) == 0 && argc == 2)
	{
		vars->fractype = '3';
		return ;
	}
	else if (ft_strncmp(argv[1], "mandelbrot", 11) == 0 && argc == 2)
	{
		vars->fractype = 'm';
		return ;
	}
	else
	{
		ft_printf("\n\e[1;31mINVALID OPTION!\e[0;0m\njulia1,2,3\nmandelbrot\n\n");
		exit(0);
	}
}
