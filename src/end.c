/*
** EPITECH PROJECT, 2017
** end.c
** File description:
** Function that manage the return of the main
*/

#include "include.h"

int end(int value)
{
	if (value == 0) {
		my_putstr("You won !\n");
		return (0);
	}
	if (value == 1) {
		my_putstr("Timeout ! You losed\n");
		return (1);
	}
	return (1);
}
