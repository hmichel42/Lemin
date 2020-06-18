/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_link_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmichel <hmichel@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:50:51 by hmichel           #+#    #+#             */
/*   Updated: 2020/06/18 18:39:16 by hmichel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lemin.h"

int		check_all_link_and_name(t_map *map, int i)
{
	int		j;

	j = 0;
	while (map->inf.size_name > ++map->mat.j)
	{
		if (i == 1 && ft_strcheck(map->map_link[map->mat.i],
			map->map_name[map->mat.j], 1))
		{
			j = 1;
			set_check_name_link(map, i);
			break ;
		}
		if (i == 2 && ft_strcheck(map->map_link[map->mat.i],
			map->map_name[map->mat.j], 2) && map->mat.name1)
		{
			j = 1;
			set_check_name_link(map, i);
		}
	}
	if ((j == 0) || (!map->mat.name2 && map->mat.save_x == -1) ||
		(!map->mat.name1 && map->mat.save_y == -1))
		return (-1);
	return (1);
}
