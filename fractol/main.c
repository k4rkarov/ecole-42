/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:54:28 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/27 18:21:57 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_map	fractol;
	
	error_check(&fractol, argc, argv);
	draw_map(&fractol);
	my_mlx_pixel_put(&fractol, 100, 101, 0x0000FF00);
	mlx_put_image_to_window(fractol.mlx, fractol.mlx_win, fractol.img, 0, 0);
	mlx_hook(fractol.mlx_win, 2, 0, close_esc, &fractol);
	mlx_hook(fractol.mlx_win, 17, 0, close_x, &fractol);
	mlx_loop(fractol.mlx);
	return (0);
}