/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formula.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:36:59 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/28 14:40:56 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	mandelbrot(double pixel_lines, double pixel_columns)
{
	double	a;
	double	b;
	double	temp;
	int		iterations;

	a = 0;
	b = 0;
	temp = 0;
	iterations = 0;
	while (pow(a, 2) + pow(b, 2) <= 4 && iterations <= 100)
	{
		temp = pow(a, 2) - pow(b, 2) + pixel_lines;
		b = 2 * a * b + pixel_columns;
		a = temp;
		iterations++;
	}
	return (iterations);
}

int	julia(double pixel_lines, double pixel_columns, double x, double y)
{
	double	a;
	double	b;
	double	temp;
	int		iterations;

	a = pixel_lines;
	b = pixel_columns;
	temp = 0;
	iterations = 0;
	while (pow(a, 2) + pow(b, 2) <= 4 && iterations <= 100)
	{
		temp = pow(a, 2) - pow(b, 2) + x;
		b = 2 * a * b + y;
		a = temp;
		iterations++;
	}
	return (iterations);
}

int	mouse_hook(int keycode, int x, int y, t_map *vars)
{
	double	old_centerx;
	double	old_centery;

	if (keycode == 4)
	{
		old_centerx = converter_pl(vars, WIDTH / 2);
		old_centery = converter_pc(vars, HEIGHT / 2);
		vars->zoom *= 1.10;
		vars->recentralize_line -= converter_pl(vars, WIDTH / 2) - old_centerx;
		vars->recentralize_columns -= converter_pc(vars, \
				HEIGHT / 2) - old_centery;
	}
	else if (keycode == 5)
	{
		old_centerx = converter_pl(vars, WIDTH / 2);
		old_centery = converter_pc(vars, HEIGHT / 2);
		vars->zoom /= 1.10;
		vars->recentralize_line -= converter_pl(vars, WIDTH / 2) - old_centerx;
		vars->recentralize_columns -= converter_pc(vars, \
				HEIGHT / 2) - old_centery;
	}
	render_fractol(vars);
	return (0);
}
