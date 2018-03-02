/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** print a str
*/

#include <unistd.h>
#include "my.h"

int my_puterror(char const *str)
{
	return (write(2, str, my_strlen(str)));
}

int my_putstr(char const *str)
{
	return (write(1, str, my_strlen(str)));
}
