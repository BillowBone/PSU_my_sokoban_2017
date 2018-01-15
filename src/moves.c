/*
** EPITECH PROJECT, 2017
** moves.c
** File description:
** Functions that handle the player's and boxes' moves
*/

#include <ncurses.h>
#include "include.h"

int player_position(char *map)
{
	int i = 0;
	int position = 0;

	while (map[i] != '\0') {
		if (map[i] == 'P')
			position = i;
		i = i + 1;
	}
	return (position);
}

void move_ok(char *map, int place, int move)
{
	if (map[place] == 'X') {
		if ((map[place + move] != '#') &&
		(map[place + move] != 'X'))
			map[place + move] = 'X';
	}
}

void replace_player(char *map, char *map2, int place, int move)
{
	if (move == 65) {
		if (map[place - map_width(map) - 1] != '#')
			move_wall(map, place, -map_width(map) - 1, move);
	}
	if (move == 66) {
		if (map[place + map_width(map) + 1] != '#')
			move_wall(map, place, map_width(map) + 1, move);
	}
	if ((map[place] == ' ') && (map2[place] == 'O'))
		map[place] = 'O';
}

void replace_player2(char *map, char *map2, int place, int move)
{
	if (move == 67) {
		if (map[place + 1] != '#')
			move_wall(map, place, 1, move);
	}
	if (move == 68) {
		if (map[place - 1] != '#')
			move_wall(map, place, -1, move);
	}
	if ((map[place] == ' ') && (map2[place] == 'O'))
		map[place] = 'O';
}

void move_objects(char *map, int place, int move)
{
	if ((move == 65) && (map[place] == 'X')) {
		move_ok(map, place - map_width(map) - 1, -map_width(map) - 1);
		if ((map[place - map_width(map) - 1] != '#') &&
		(map[place - map_width(map) - 1] != 'X'))
			map[place - map_width(map) - 1] = 'X';
	}
	if ((move == 66) && (map[place] == 'X')) {
		move_ok(map, place + map_width(map) + 1, map_width(map) + 1);
		if ((map[place + map_width(map) + 1] != '#') &&
		(map[place + map_width(map) + 1] != 'X'))
			map[place + map_width(map) + 1] = 'X';
	}
	move_objects2(map, place, move);
}
