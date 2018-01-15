/*
** EPITECH PROJECT, 2017
** my_sokoban.c
** File description:
** First part of the code for the my_sokoban project
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "include.h"

void help(void)
{
	my_putstr("USAGE\n");
	my_putstr("           ./my_sokoban map\n\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("           map    ");
	my_putstr("file representing the warehouse map,");
	my_putstr(" containing '#' for walls,\n");
	my_putstr("                  ");
	my_putstr("'P' for the player, 'X' for boxes and");
	my_putstr(" 'O' for storage locations.\n");
}

int no_args(int argc, char *argv[])
{
	if (argc == 1) {
		any_help(argc, argv);
		return (84);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int fd = 0;
	int fs = 0;
	char buffer[30000];
	char buffer2[30000];
	int value = 0;

	if (no_args(argc, argv) == 84)
		return (84);
	if (any_help(argc, argv) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	fs = read(fd, buffer, 30000);
	if (errors(buffer) == 1) {
		my_putstr("Your map is invalid, check -h option\n");
		return (84);
	}
	copy_buffer(buffer, buffer2);
	value = game_loop(buffer, buffer2);
	return (end(value));
}
