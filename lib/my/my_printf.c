/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void print_variable(char type, void *var)
{
	if (type == 'i' || type == 'l' || type == 'd')
		my_put_nbr((int)(long)var);
	else if (type == 's' || type == 'S')
		my_putstr((char*)var);
	else if (type == 'c')
		my_putchar((char)(long)var);
}

void my_printf(char *str, ...)
{
	va_list list;

	va_start(list, str);
	for (int i = 0; str[i] != '\0'; i ++) {
		if (str[i] == '%') {
			print_variable(str[i + 1], va_arg(list, void*));
			i++;
		}
		else
			my_putchar(str[i]);
	}
	va_end(list);
}
