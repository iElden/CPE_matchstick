/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** find the smallest prime number after the nb
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
	while (1 == 1) {
		if (my_is_prime(nb) == 1) {
			return (nb);
		}
		else {
			nb ++;
		}
	}
}
