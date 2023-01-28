/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:54:28 by ide-frei          #+#    #+#             */
/*   Updated: 2023/01/28 14:36:02 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_map	fractol;

	fractol.r_min = -2.0;
	fractol.r_max = 1.0;
	fractol.i_min = -1.0;
	fractol.i_max = 1.0;
	fractol.zoom = 1.0;
	error_check(&fractol, argc, argv);
	open_win(&fractol);
	render_fractol(&fractol);
	mlx_hook(fractol.mlx_win, 2, 0, close_esc, &fractol);
	mlx_hook(fractol.mlx_win, 17, 0, close_x, &fractol);
	mlx_hook(fractol.mlx_win, 4, 0, mouse_hook, &fractol);
	mlx_loop(fractol.mlx);
	return (0);
}
