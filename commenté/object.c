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
	board->len = col;			// col et max dont envoyé en argument
	board->max = max;
	board->ar = malloc(sizeof(int) * col);			// Le seul malloc du programme ! On alloue de la mémoire pour
	if (!board->ar)						// notre tableau d'int, chaque case du tableau va correspondre
		return (false);					// à une ligne de notre matchstick, et la valeur de cette case
	if (!board->len || !board->max) {			// va juste correspondre au nombre de stick sur la ligne
		my_puterror("Error : Arguments must be > 0 !\n");
		return (false);					
	}
	for (int i = 0; i < col; i++)
		board->ar[i] = i * 2 + 1;	// la première ligne a 1 stick, et chaque ligne suivante en a 2 de plus
	return (true);
}

int sum_array(List *list) // retourne la somme de toute les valeurs de la liste
{
	int sum = 0;

	for (int i = 0; i < list->len; i++)
		sum += list->ar[i];
	return (sum);
}

int get_nempty_line(List *list) // retourne le nombre de ligne restant dans la liste
{
	int result = 0;

	for (int i = 0; i < list->len; i++)
		if (list->ar[i])
			result++;
	return (result);
}

int get_smallest_value(List *list) // retourne l'index de la plus petite valeur de la liste
{
	int index = 0;
	int value = 0;

	for (int i = 0; i < list->len; i++) {
		if (list->ar[i] && (!value || value > list->ar[i])) {
			value = list->ar[i];
			index = i;
		}
	}
	return (index + 1);	// le +1 ici c'est parceque la gestion de l'IA se fait "user side"
}				//du coup la 1ère ligne c'est l'index 0, la 2 c'est 1 ect...
