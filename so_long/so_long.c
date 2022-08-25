/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:42:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/24 20:53:47 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "gnl/get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>

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

int    main(int argc, char **argv)
{
    void    *mlx;
    void    *mlx_win;
    char    *line;
    int        fd;
	int		len_line;
    char    *map_path;
	char    *img_path = "images/pokeball.xpm";
    void    *img;
    int        img_width, img_height;
    int x = 0;
    int i = 0;
	int y = 0;
	int line_count = 0;

    (void)argc;
    mlx = mlx_init();
    map_path = *(argv + 1);
    fd = open(map_path, O_RDONLY);
    line = get_next_line(fd);
	len_line = ft_strlen(line);
	img = mlx_xpm_file_to_image(mlx, img_path, &img_width, &img_height);
    mlx_win = mlx_new_window(mlx, (len_line - 1) * img_width, 320, "Gotta catch'em all!");	
	while (line)
	{
		while (*(line + i))
    	{
        	if (*(line + i) == '1')
				img_path = "images/tree.xpm";
			else if (*(line + i) == 'C')
				img_path = "images/pikachu.xpm";
			else if (*(line + i) == 'P')
				img_path = "images/pokeball.xpm";
			else if (*(line + i) == 'E')
				img_path = "images/ash.xpm";
			else
				img_path = "images/grass.xpm";
			img = mlx_xpm_file_to_image(mlx, img_path, &img_width, &img_height);
		 	mlx_put_image_to_window(mlx, mlx_win, img, x, y);
        	x += img_width;
        	i++;
		}
		i = 0;
		x = 0;
    	line = get_next_line(fd);
		y += img_height;
	}
    mlx_loop(mlx);
    return (0);
}
