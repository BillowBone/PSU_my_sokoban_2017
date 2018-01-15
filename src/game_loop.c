/*
** EPITECH PROJECT, 2017
** game_loop.c
** File description:
** Function that contains my game loop for my_sokoban
*/

#include <ncurses.h>
#include "include.h"

int verify(int storages, char *map, char *map2)
{
	int i = 0;

	if (storages != 0)
		return (0);
	while (map[i] != '\0') {
		if (map2[i] == 'O' && map[i] != 'X')
			return (0);
		i = i + 1;
	}
	return (1);
}

int game3(int storages, int move, char *map, char *map2)
{
	if (verify(storages, map, map2) == 1)
		return (0);
	if (move == -1)
		return (1);
	if (move == 32)
		return (2);
	return (3);
}

void game_loop2(char *map, char *map2, int place, int move)
{
	replace_player(map, map2, place, move);
	replace_player2(map, map2, place, move);
}

int game_loop(char *map, char *map2)
{
	int move = 0;

	initscr();
	while (1) {
		clear();
		printw(map);
		dimension(map_length(map), map_width(map));
		timeout(10000);
		move = getch();
		game_loop2(map, map2, player_position(map), move);
		refresh();
		if (game3(storages_count(map), move, map, map2) == 2) {
			copy_buffer(map2, map);
		}
		if ((game3(storages_count(map), move, map, map2) == 0) ||
		    (game3(storages_count(map), move, map, map2) == 1)) {
			endwin();
			return (game3(storages_count(map), move, map, map2));
		}
	}
}
