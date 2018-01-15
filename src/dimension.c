/*
** EPITECH PROJECT, 2017
** dimension.c
** File description:
** Function that checks the size of the window
*/

#include "include.h"
#include <ncurses.h>

void dimension(int length, int width)
{
	if ((COLS < width + 1) || (LINES < length)) {
		clear();
		mvprintw(LINES / 2, (COLS - 28) / 2, "Please enlarge your terminal");
		refresh();
	}
}
