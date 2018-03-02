/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** gameloop
*/

#include "matchstick.h"
#include "my_bool.h"
#include "my.h"

bool line_is_valid(char *rep, List *board, Input *input)
{
	if (!rep) {
		my_putstr("\nError: input can't be empty\n");
		return (false);
	}
	if (!my_str_isnum(rep)) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (false);
	}
	input->line = my_getnbr(rep);
	if (input->line <= 0 || input->line > board->len) {
		my_putstr("Error: this line is out of range\n");
		return (false);
	}
	return (true);
}

bool match_is_valid(char *rep, List *board, Input *input)
{
	if (!rep) {
		my_putstr("\nError: input can't be empty\n");
		return (false);
	}
	if (!my_str_isnum(rep)) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (false);
	}
	input->nb = my_getnbr(rep);
	if (input->nb <= 0)
		my_putstr("Error: you have to remove at least one match\n");
	else if (input->nb > board->ar[input->line - 1])
		my_putstr("Error: not enough matches on this line\n");
	else if (input->nb > board->max) {
		my_printf("Error: you cannot remove more than %i ", board->max);
		my_printf("matches per turn\n", board->max);
	}
	else
		return (true);
	return (false);
}

bool user_input(List *board, Input *input)
{
	char *response;

	while (true) {
		my_putstr("Line: ");
		response = get_next_line(0);
		if (!response)
			return (false);
		if (!line_is_valid(response, board, input))
			continue;
		my_putstr("Matches: ");
		response = get_next_line(0);
		if (!response)
			return (false);
		if (!match_is_valid(response, board, input))
			continue;
		return (true);
	}
}

bool player_turn(List *board)
{
	Input input;

	my_putstr("Your turn:\n");
	if (!user_input(board, &input))
		return (-1);
	board->ar[input.line - 1] -= input.nb;
	my_printf("Player removed %i ", input.nb);
	my_printf("match(es) from line %i\n", input.line);
	if (sum_array(board) <= 0) {
		display_board(board);
		my_putstr("You lost, too bad...\n");
		return (1);
	}
	return (0);
}
