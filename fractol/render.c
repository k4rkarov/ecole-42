/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:56:52 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/28 14:41:44 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_mlx_pixel_put(t_map *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	render_fractol(t_map *vars)
{
	int	pixel_lines;
	int	pixel_columns;
	int	iterations;

	pixel_lines = 0;
	pixel_columns = 0;
	iterations = 0;
	while (pixel_columns < HEIGHT)
	{
		while (pixel_lines < WIDTH)
		{
			iterations = fractol_type(vars, pixel_lines, pixel_columns);
			if (iterations == 101)
				my_mlx_pixel_put(vars, pixel_lines, pixel_columns, 0x00141414);
			else if (iterations < 101)
				my_mlx_pixel_put(vars, pixel_lines, pixel_columns, \
						0x00000011 * iterations);
			pixel_lines++;
		}
		pixel_lines = 0;
		pixel_columns++;
	}
	mlx_put_image_to_window(vars->mlx, vars->mlx_win, vars->img, 0, 0);
}

int	fractol_type(t_map *vars, int pixel_lines, int pixel_columns)
{
	double	converted_pl;
	double	converted_pc;

	if (vars->fractype == 'j' || vars->fractype == '2' || vars->fractype == '3')
	{
		vars->r_max = 2.0;
		vars->i_min = -2.0;
		vars->i_max = 2.0;
	}
	converted_pl = converter_pl(vars, pixel_lines);
	converted_pc = converter_pc(vars, pixel_columns);
	if (vars->fractype == 'm')
		return (mandelbrot(converted_pl, converted_pc));
	else if (vars->fractype == 'j')
		return (julia(converted_pl, converted_pc, 0.45, 0.1428));
	else if (vars->fractype == '2')
		return (julia(converted_pl, converted_pc, 0.285, 0));
	else if (vars->fractype == '3')
		return (julia(converted_pl, converted_pc, -0.835, -0.2321));
	return (0);
}

double	converter_pl(t_map *vars, int pixel_lines)
{
	vars->converted_lines = (vars->r_max - vars->r_min) / WIDTH;
	return ((pixel_lines * vars->converted_lines * vars->zoom) \
			+ vars->r_min + vars->recentralize_line);
}

double	converter_pc(t_map *vars, int pixel_columns)
{
	vars->converted_columns = (vars->i_max - vars->i_min) / HEIGHT;
	return ((pixel_columns * vars->converted_columns * vars->zoom) \
			+ vars->i_min + vars->recentralize_columns);
}
