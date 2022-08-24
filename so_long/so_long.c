/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:42:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/23 21:02:16 by ide-frei         ###   ########.fr       */
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
	void	*img;
	int		x, i, y;
	char	*relative_path = "images/grass.xpm";
	int		img_width;
	int		img_height;
	
	y = 0;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1366, 768, "So long, human");
	//img.img = mlx_new_image(mlx, 1920, 1080);
	//img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,&img.endian);
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);	
	while (y < 768)
	{
		x = 0;
		while (x < 1366)
		{
			mlx_put_image_to_window(mlx, mlx_win, img, x, y);
			x += img_width;
		}
		mlx_put_image_to_window(mlx, mlx_win, img, x, y);
		y += img_width;
	}
	relative_path = "images/portal.xpm";
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);	
	mlx_put_image_to_window(mlx, mlx_win, img, 0, 0);
	mlx_loop(mlx);
}
