/*
** EPITECH PROJECT, 2017
** include.h
** File description:
** include.h
*/

#ifndef _MY_H_
#define _MY_H_
#include <ncurses.h>

void copy_buffer(char *buffer, char *buffer2);
int player_count(char *map);
int boxes_count(char *map);
int storages_count(char *map);
int map_length(char *map);
int map_width(char *map);
int end(int value);
int errors(char *map);
int game3(int storages, int move, char *map, char *map2);
int verify(int storages, char *map, char *map2);
void game_loop2(char *map, char *map2, int place, int move);
int game_loop(char *map, char *map2);
int any_help(int argc, char *argv[]);
int player_position(char *map);
void move_ok(char *map, int place, int move);
void replace_player(char *map, char *map2, int place, int move);
void replace_player2(char *map, char *map2, int place, int move);
void move_objects(char *map, int place, int move);
void move_objects2(char *map, int place, int move);
void move_wall(char *map, int place, int move, int arrow);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
void help(void);
int my_strlen(char *str);
int no_args(int argc, char *argv[]);
void dimension(int length, int width);
#endif /* _MY_H_ */
