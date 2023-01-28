/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:43:42 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/28 15:08:50 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include "./printf/ft_printf.h"
# include "./mlx/mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>

# define WIDTH 800
# define HEIGHT 600

typedef struct s_map
{
	void	*mlx_win;
	void	*mlx;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	char	fractype;
	double	converted_lines;
	double	converted_columns;
	double	recentralize_line;
	double	recentralize_columns;
	double	zoom;
	double	r_max;
	double	r_min;
	double	i_max;
	double	i_min;
}	t_map;

void	open_win(t_map *fractol);
int		close_esc(int keycode, t_map *vars);
int		close_x(t_map *vars);
void	error_check(t_map *vars, int argc, char *argv[]);
void	my_mlx_pixel_put(t_map *data, int x, int y, int color);
void	render_fractol(t_map *vars);
int		fractol_type(t_map *vars, int pixel_lines, int pixel_columns);
int		mandelbrot(double pixel_lines, double pixel_columns);
int		julia(double pixel_lines, double pixel_columns, double x, double y);
double	converter_pl(t_map *vars, int pixel_lines);
double	converter_pc(t_map *vars, int pixel_columns);
int		mouse_hook(int keycode, int x, int y, t_map *vars);
void	fractalen(t_map *vars, int argc, char **argv);

#endif
