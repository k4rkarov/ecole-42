/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:42:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/22 20:13:56 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int		i, y;
	//int offset = (y * line_length + x * (bits_per_pixel / 8));

	i = 5;
	y = 5;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "So long, human");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,&img.endian);
	while (i < 100)
	{
		my_mlx_pixel_put(&img, 5, i, 0x00FF00);
		my_mlx_pixel_put(&img, i, 5, 0x00FF00);
		my_mlx_pixel_put(&img, i, i, 0x00FF00);
		i++;
	}
	while (y < 100)
	{
		my_mlx_pixel_put(&img, y, 100, 0x00FF00);
		my_mlx_pixel_put(&img, 100, y, 0x00FF00);
		y++;
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
