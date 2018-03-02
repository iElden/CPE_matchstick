/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** import struct and function proto
*/

#ifndef __MATHSTICK__
#define __MATHSTICK__

#include "my_bool.h"

typedef struct List List;
struct List {
	int *ar;
	int len;
	int max;
};

typedef struct Input Input;
struct Input {
	int line;
	int nb;
};

int putnchar(char c, int n);
void display_board(List *board);
bool create_object(List *board, int col, int);
int sum_array(List *board);
bool player_turn(List *board);
bool ia_turn(List *board);
int get_nempty_line(List *board);
int highter(int a, int b);
int smallest(int a, int b);
int get_smallest_value(List *borad);
#endif
