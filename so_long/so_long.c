/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:42:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/08/29 21:31:36 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "libft/libft.h"
#include <fcntl.h>

void	display_map(void *windows_rec, void *mlx, char *map_path);

void	read_map(char *map_path, void *mlx)
{
	int		width;
	int		height;
	int		i;
	int		fd;
	char	*line;
	void	*window;

	width = 0;
	height = 0;
	fd = open(map_path, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		i = 0;
		width = 0;
		while (line[i++] != '\n')
			width++;
		line = get_next_line(fd);
		height++;
	}
	window = mlx_new_window(mlx, width * 64, height * 64, "POKÉMON");
	close(fd);
	display_map(window, mlx, map_path);
}

void	display_map(void *windows_rec, void *mlx, char *map_path)
{
	void	*img;
	int		x;
	int		y;
	int		i;
	int		img_width;
	int		img_height;
	int		fd;
	char	*line;
	char	*img_path;

	y = 0;
	fd = open(map_path, O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		i = 0;
		x = 0;
		while (line[i])
		{
			if (line[i] == '1')
				img_path = "images/tree.xpm";
			else if (line[i] == 'C')
				img_path = "images/pikachu.xpm";
			else if (line[i] == 'P')
				img_path = "images/pokeball.xpm";
			else if (line[i] == 'E')
				img_path = "images/ash.xpm";
			else
				img_path = "images/grass.xpm";
			img = mlx_xpm_file_to_image(mlx, img_path, &img_width, &img_height);
			mlx_put_image_to_window(mlx, windows_rec, img, x, y);
			x += 64;
			i++;
		}
		line = get_next_line(fd);
		y += img_height;
	}
	close(fd);
	mlx_loop(mlx);
}

int	main(int argc, char **argv)
{
	void	*mlx;

	(void)argc;
	mlx = mlx_init();
	read_map(argv[1], mlx);
	return (0);
}
