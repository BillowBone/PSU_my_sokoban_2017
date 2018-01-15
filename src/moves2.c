/*
** EPITECH PROJECT, 2017
** moves2.c
** File description:
** Part 2 of the moving gestionnary functions
*/

#include <ncurses.h>
#include "include.h"

void move_objects2(char *map, int place, int move)
{
	if ((move == 67) && (map[place] == 'X')) {
		move_ok(map, place + 1, 1);
		if ((map[place + 1] != '#') && (map[place + 1] != 'X'))
			map[place + 1] = 'X';
	}
	if ((move == 68) && (map[place] == 'X')) {
		move_ok(map, place - 1, -1);
		if ((map[place - 1] != '#') && (map[place - 1] != 'X'))
			map[place - 1] = 'X';
	}
}

void move_wall(char *map, int place, int move, int arrow)
{
	if (((map[place + move] == 'X') &&
	(map[place + move + move] != '#') &&
	(map[place + move + move] != 'X')) ||
	(map[place + move] == ' ') ||
	(map[place + move] == 'O')) {
		move_objects(map, place + move, arrow);
		map[place] = ' ';
		map[place + move] = 'P';
	}
}
