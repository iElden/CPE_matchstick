/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** usefull func
*/

#include "my_bool.h"

int highter (int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}

int smallest(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
