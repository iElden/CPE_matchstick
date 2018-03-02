/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** task04
*/

#include "my.h"

long power_number(int nb, int p)
{
	long result_long;

	if (p < 0) {
		return (0);
	}
	if (p == 0) {
		return (1);
	}
	result_long = power_number(nb-1, p-1) *nb;
	if (result_long > 4294967295 || result_long < -4294967295) {
		return (0);
	}
	return (result_long);
}

int my_compute_power_rec(int nb, int p)
{
	long result_long = nb;
	int result_int;

	if (p < 0) {
		return (0);
	}
	if (p == 0) {
		return (1);
	}
	result_long = power_number(nb, p);
	result_int = convert_to_int(result_long);
	return (result_int);
}
