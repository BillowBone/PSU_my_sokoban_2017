/*
** EPITECH PROJECT, 2017
** errors.c
** File description:
** Functions that handle all errors the player could make
*/

#include "include.h"

int errors(char *map)
{
	int i = 0;
	
	if (player_count(map) != 1)
		return (1);
	if (boxes_count(map) != storages_count(map))
		return (1);
	while (map[i] != '\0') {
		if ((map[i] != '#') && (map[i] != ' ') &&
		(map[i] != '\n') && (map[i] != 'P') &&
		(map[i] != 'X') && (map[i] != 'O'))
			return (1);
		i = i + 1;
	}
	return (0);
}
