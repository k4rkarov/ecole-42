/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:42:23 by ide-frei          #+#    #+#             */
/*   Updated: 2022/11/04 15:39:12 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_map(t_map game, void *mlx, char *map_path);

void	read_map(char *map_path, void *mlx, t_map game)
{
	int		i;
	int		fd;

	game.width = 0;
	game.height = 0;
	game.fd = open(map_path, O_RDONLY);
	game.line = get_next_line(game.fd);
	while (game.line)
	{
		i = 0;
		game.width = 0;
		while (game.line[i++] != '\n')
			game.width++;
		game.line = get_next_line(game.fd);
		game.height++;
	}
	game.window = mlx_new_window(mlx, game.width * PIXEL, game.height * PIXEL, "BEST POKEMON GAME EVER");
	close(game.fd);
	display_map(game, mlx, map_path);
}

void	display_map(t_map game, void *mlx, char *map_path)
{
	int		x;
	int		y;
	int		i;
	
	y = 0;
	game.fd2 = open(map_path, O_RDONLY);
	game.line2 = get_next_line(game.fd2);
	while (game.line2)
	{
		i = 0;
		x = 0;
		while (game.line2[i])
		{
			if (game.line2[i] == '1')
				game.img_path = WALL;
			else if (game.line2[i] == 'C')
				game.img_path = COLLECTABLE;
			else if (game.line2[i] == 'P')
				game.img_path = PLAYER;
			else if (game.line2[i] == 'E')
				game.img_path = EXIT;
			else
				game.img_path = FLOOR;
			game.img = mlx_xpm_file_to_image(mlx, game.img_path, &game.img_width, &game.img_height);
			mlx_put_image_to_window(mlx, game.window, game.img, x, y);
			x += 64;
			i++;
		}
		game.line2 = get_next_line(game.fd2);
		y += game.img_height;
	}
	close(game.fd2);
	mlx_loop(mlx);
}
