/*
** EPITECH PROJECT, 2018
** mathstick
** File description:
** main
*/

#include "matchstick.h"
#include "my.h"
#include "my_bool.h"

bool error_endeling(int ac, char **av)
{
	if (ac < 3)
		my_puterror("Error : Missing argument !\n");
	else if (!av[1] || !av[2])
		my_puterror("Error : Invalid argument !\n");
	else if (!my_str_isnum(av[1]) || !my_str_isnum(av[2]))
		my_puterror("Error : Arguments must be a positive number !\n");
	else
		return (false);
	return (true);
}

int main(int ac, char **av)
{
	List board;
	int rt_value;

	if (error_endeling(ac, av))
		return (84);
	if (!create_object(&board, my_getnbr(av[1]), my_getnbr(av[2])))
		return (84);
	while (true) {
		display_board(&board);
		rt_value = player_turn(&board);
		if (rt_value == -1)
			return (0);
		else if (rt_value == 1)
			return (2);

		display_board(&board);
		if (ia_turn(&board))
			return (1);
	}
}
