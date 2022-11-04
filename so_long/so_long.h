/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:07:21 by ide-frei          #+#    #+#             */
/*   Updated: 2022/11/04 16:28:49 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include "libft/libft.h"
# include <fcntl.h>

# define WALL "./images/tree.xpm"
# define PLAYER "./images/pokeball.xpm"
# define COLLECTABLE "./images/pikachu.xpm"
# define EXIT "./images/ash.xpm"
# define FLOOR "./images/grass.xpm"
# define PIXEL 64

typedef	struct s_map
{
	char	**map;
	int		width;
	int		height;
	int		fd;
	char 	*line;
	void 	*window;
	void	*img;
	int		img_width;
	int		img_height;
	char	*line2;
	int		fd2;
	char	*img_path;

}	t_map;

void    read_map(char *map_path, void *mlx, t_map game);
void    display_map(t_map game, void *mlx, char *map_path);
int		map_isrectangle(t_map *map);
int		map_wallaround_pt1(t_map *map);
int 	map_wallaround_pt2(t_map *map);
int		map_valid(t_map *map);
int		map_isber(char *map);

#endif
