/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swap 2 pointer
*/

void my_swap(int *a, int *b)
{
	int *buffer = a;
	a = b;
	b = buffer;
}
