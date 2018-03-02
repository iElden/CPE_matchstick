/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** IA turn
*/

#include "matchstick.h"
#include "my_bool.h"
#include "my.h"

void ia_choice(List *boar, Input *in)
{
	in->line = get_smallest_value(boar);
	if (get_nempty_line(boar) <= 1) {
		if (boar->ar[in->line - 1] == 1)
			in->nb = 1;
		else {
			in->nb = (boar->ar[in->line - 1] - 1) % (boar->max + 1);
			in->nb = in->nb <= 0 ? boar->max : in->nb;
		}
	}
	else
		in->nb = smallest(boar->ar[in->line - 1], boar->max);
}

bool ia_turn(List *board)
{
	Input in;

	my_putstr("AI's turn...\n");
	ia_choice(board, &in);
	board->ar[in.line - 1] -= in.nb;
	my_printf("AI removed %i match(es) from line %i\n", in.nb, in.line);
	if (sum_array(board) <= 0) {
		display_board(board);
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (true);
	}
	return (false);
}
