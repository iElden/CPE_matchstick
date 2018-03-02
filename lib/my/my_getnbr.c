/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** convert a string to number
*/

#include "my.h"

int assemble_number(int neg, int *number, int pos)
{
	int total = 0;

	for (int i = 0; i < pos; i++) {
		total = total * 10;
		total = total + number[i];
	}
	if (neg > 0) {
		total = -total;
	}
	return (total);
}

int my_getnbr (char const *str)
{
	int pos = 0;
	int number[10];
	int length = my_strlen(str);
	int is_negative = -1;
	int total = 0;

	for (int i = 0; str[i] && i < length; i++) {
		if (str[i] == '-')
			is_negative = - is_negative;
		else if (str[i] <= 57 && str[i] >= 48) {
			number[pos] = str[i] - '0';
			pos ++;
		}
		else {
			total = assemble_number(is_negative, number, pos);
			return (total);
		}
	}
	total = assemble_number(is_negative, number, pos);
	return (total);
}
