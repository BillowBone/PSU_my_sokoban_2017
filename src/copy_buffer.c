/*
** EPITECH PROJECT, 2017
** copy_buffer.c
** File description:
** Function that copy my buffer into another one
*/

#include "include.h"

void copy_buffer(char *buffer, char *buffer2)
{
	int i = 0;

	while (buffer[i] != '\0') {
		buffer2[i] = buffer[i];
		i = i + 1;
	}
	buffer2[i] = '\0';
}
