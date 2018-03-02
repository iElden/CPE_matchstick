/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** display the number given as parameter
*/

#include "my.h"

long reverse(long number)
{
	long reversed = 0;

	while (number != 0) {
		reversed = reversed * 10;
		reversed = reversed + number % 10;
		number = number / 10;
	}
	return (reversed);

}

int number_lenght(long number)
{
	int lenght = 1;

	while (number / 10 != 0) {
		number = number / 10;
		lenght = lenght + 1;
	}
	return (lenght);
}

int my_put_nbr(int nb)
{
	long number = nb;
	int lenght;

	if (number < 0) {
		my_putchar('-');
		number = -number;
	}
	lenght = number_lenght(number);
	number = reverse(number);
	while (lenght > 0) {
		my_putchar(number % 10 + 48);
		number = number / 10;
		lenght = lenght -1;
	}
	return (0);
}
