/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:34:52 by ide-frei          #+#    #+#             */
/*   Updated: 2022/11/04 17:06:19 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int map_isrectangle(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(map->map[i]);
	if (map->map == NULL)
		return (0);
	while (map->map[i])
	{
		if (ft_strlen(map->map[i]) != j)
			return (0);
		i++;
	}
	return (1);
}

int	map_wallaround_pt1(t_map *map)
{
	int	i;

	i = 0;
	while (map->map[0][i])
	{
		if (map->map[0][i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (map->map[map->height][i])
	{
		if (map->map[map->width][i] != '1')
			return (0);
		i++;
	}
	if (map_wallaround_pt2(map) == 1)
		return (1);
	else
		return (0);
}

int	map_wallaround_pt2(t_map *map)
{
	int	i;

	i = 0;
	while (map->map[i])
	{
		if (map->map[i][0] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (map->map[i])
	{
		if (map->map[i][ft_strlen(map->map[i]) - 1] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	map_valid(t_map *map)
{
	int	i;

	i = 0;
	while (map->map[i])
	{
		if (ft_strchr(map->map[i], 'P') == 0 && ft_strchr(map->map[i], '0') == 0
			&& ft_strchr(map->map[i], '1') == 0
			&& ft_strchr(map->map[i], 'C') == 0
			&& ft_strchr(map->map[i], 'E') == 0)
			return (0);
		i++;
	}
	if (map_wallaround_pt1(map) && map_isrectangle(map))
	{
		if (start_infestation(map) == 1)
			return (1);
		else
			return (0);
	}
	else
		return (0);	
}

int	map_isber(char *map)
{
	if (ft_strnstr(map, ".ber", 4))
	{
		free(map);
		return (1);
	}
	else
	{
		free(map);
		return (0);
	}
}
