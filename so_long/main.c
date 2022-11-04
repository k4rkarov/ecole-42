/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:37:30 by ide-frei          #+#    #+#             */
/*   Updated: 2022/11/04 17:05:25 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
 
int	main(int argc, char **argv)
 {
	 void	*mlx;
	 t_map	game;
	
	 mlx = mlx_init();
	 read_map(argv[1], mlx, game);
	 return (0);
 }
