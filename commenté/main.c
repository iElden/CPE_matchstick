/*
** EPITECH PROJECT, 2018
** mathstick
** File description:
** main
*/

#include "matchstick.h"
#include "my.h"
#include "my_bool.h"

bool error_endeling(int ac, char **av)				// Vérification des arguments envoyé dans le main
{
	if (ac < 3)						// Vérification du nombre d'argument
		my_puterror("Error : Missing argument !\n");
	else if (!av[1] || !av[2])				// Vérification que les méchant APE envoie pas le /dev/null
		my_puterror("Error : Invalid argument !\n");	
	else if (!my_str_isnum(av[1]) || !my_str_isnum(av[2]))	// Vérification que l'on envoie bien un nombre positif au programme
		my_puterror("Error : Arguments must be a positive number !\n");
	else
		return (false);
	return (true);
}

int main(int ac, char **av)
{
	List board;					// La structure "board" contient juste un tableau d'int, sa longeur
	int rt_value;					//  et le nombre maximal de baton pouvant être retiré (av[2])

	if (error_endeling(ac, av))
		return (84);
	if (!create_object(&board, my_getnbr(av[1]), my_getnbr(av[2]))) // On crée notre structure board, si il y a un problème on se casse.
		return (84);
	while (true) {							// Le jeu s'éxécute en boucle jusqu'a la fin (jusqu'a un return)
		display_board(&board); 
		rt_value = player_turn(&board);			// Player_turn peut retourner 3 valeurs
		if (rt_value == -1)				// -1 : le méchant APE a fait un ctrl + D et le programme doit s'arrêter
			return (0);				// 0 : rien de spécial, le jour à joué et c'est le tour de l'IA.
		else if (rt_value == 1)				// 1 : le joueur à perdu, l'IA a gagné
			return (2);
		display_board(&board);
		if (ia_turn(&board))				// si l'IA renvoie true, c'est que elle a perdu, sinon on recommence.
			return (1);
	}
}
