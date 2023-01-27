/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:54:28 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/27 17:08:04 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_map	fractol;
	int		i;
	int		s = 100;
	
	i = -1;
	fractol.mlx = mlx_init();
	draw_map(argv[1], &fractol);
	while (s < 200)
	{
		my_mlx_pixel_put(&fractol, 100, s, 0x0000FF00);
		my_mlx_pixel_put(&fractol, s, s, 0x0000FF00);
		my_mlx_pixel_put(&fractol, s, 101, 0x0000FF00);
		s++;
	}
	mlx_put_image_to_window(fractol.mlx, fractol.mlx_win, fractol.img, 0, 0);
	mlx_hook(fractol.mlx_win, 2, 0, close_esc, &fractol);
	mlx_hook(fractol.mlx_win, 17, 0, close_x, &fractol);
	mlx_loop(fractol.mlx);
	return (0);
}
