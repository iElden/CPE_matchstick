/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** function used for object
*/

#include "matchstick.h"
#include <stdlib.h>
#include "my_bool.h"
#include "my.h"

bool create_object(List *board, int col, int max)
{
	board->len = col;
	board->max = max;
	board->ar = malloc(sizeof(int) * col);
	if (!board->ar)
		return (false);
	if (!board->len || !board->max) {
		my_puterror("Error : Arguments must be > 0 !\n");
		return (false);
	}
	for (int i = 0; i < col; i++)
		board->ar[i] = i * 2 + 1;
	return (true);
}

int sum_array(List *list)
{
	int sum = 0;

	for (int i = 0; i < list->len; i++)
		sum += list->ar[i];
	return (sum);
}

int get_nempty_line(List *list)
{
	int result = 0;

	for (int i = 0; i < list->len; i++)
		if (list->ar[i])
			result++;
	return (result);
}

int get_smallest_value(List *list)
{
	int index = 0;
	int value = 0;

	for (int i = 0; i < list->len; i++) {
		if (list->ar[i] && (!value || value > list->ar[i])) {
			value = list->ar[i];
			index = i;
		}
	}
	return (index + 1);
}
