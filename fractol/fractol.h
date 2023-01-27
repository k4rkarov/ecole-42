/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:43:42 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/27 17:03:45 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
# include "./mlx/mlx.h"
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# define WIDTH 700
# define HEIGHT 700

typedef struct s_map
{
	void	*mlx_win;
	void	*mlx;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_map;

void	draw_map(char *type, t_map *fractol);
int		close_esc(int keycode, t_map *vars);
int		close_x(int x_clicked, t_map *vars);
void	my_mlx_pixel_put(t_map *data, int x, int y, int color);

#endif
