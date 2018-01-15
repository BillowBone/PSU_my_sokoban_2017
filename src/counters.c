/*
** EPITECH PROJECT, 2017
** counters.c
** File description:
** Functions that counts number of player, of boxes and of sotrage
*/

#include <ncurses.h>
#include "include.h"

int player_count(char *map)
{
	int i = 0;
	int nb_players = 0;

	while (map[i] != '\0') {
		if (map[i] == 'P')
			nb_players = nb_players + 1;
		i = i + 1;
	}
	return (nb_players);
}

int boxes_count(char *map)
{
	int i = 0;
	int nb_boxes = 0;

	while (map[i] != '\0') {
		if (map[i] == 'X')
			nb_boxes = nb_boxes + 1;
		i = i + 1;
	}
	return (nb_boxes);
}

int storages_count(char *map)
{
	int i = 0;
	int nb_storages = 0;

	while (map[i] != '\0') {
		if (map[i] == 'O')
			nb_storages = nb_storages + 1;
		i = i + 1;
	}
	return (nb_storages);
}

int map_length(char *map)
{
	int i = 0;
	int length = 0;

	while (map[i] != '\0') {
		if ((map[i] == '\n') && (map[i - 1] == '#'))
			length = length + 1;
		i = i + 1;
	}
	return (length);
}

int map_width(char *map)
{
	int i = 0;

	while (map[i] != '\n') {
		i = i + 1;
	}
	return (i);
}
