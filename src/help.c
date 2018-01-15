/*
** EPITECH PROJECT, 2017
** help.c
** File description:
** Function that check if I have to display the help menu or not
*/

#include "include.h"

int any_help(int argc, char *argv[])
{
	if (argc == 1) {
		my_putstr("Argument is missing, check ./my_sokoban -h\n");
		return (84);
	}
	if (argv[1][0] == '-' && argv[1][1] == 'h') {
		help();
		return (0);
	}
	return (1);
}
