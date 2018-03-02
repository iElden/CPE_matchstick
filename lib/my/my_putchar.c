/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** put char
*/

#include <unistd.h>

int my_putchar(char c)
{
	return (write(1, &c, 1));
}
