/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** display func
*/

#include <unistd.h>
#include "matchstick.h"
#include "my.h"

int putnchar(char c, int n)		// La fonction putnchar affiche un l'écran
{					// un char c un nombre n de fois,
	int i = 0;			// cette fontion va être pratique pour pouvoir
					// afficher le nombre de baton stocké dans notre
	for (; n > 0; n--)		// tableau d'int à l'écran, la fonction return
		i += write(1, &c, 1);	// le nombre total de caractère affiché par write.
	return (i);			// 
}

void display_board(List *board)
{
	int p;

	putnchar('*', board->len * 2 + 1);
	my_putchar('\n');
	for (int i = 0; i < board->len; i++) {
		my_putchar('*');
		p = putnchar(' ', board->len - i - 1);
		p += putnchar('|', board->ar[i]);
		putnchar(' ', board->len * 2 - 1 - p);
		my_putstr("*\n");
	}
	putnchar('*', board->len * 2 + 1);
	my_putstr("\n\n");
}
