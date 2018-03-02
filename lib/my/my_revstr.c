/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** reverse a string (Task 03)
*/

#include "my.h"

void my_revstr_swap(char *a, char *b)
{
	char x = *b;

	*b = *a;
	*a = x;

}

char *my_revstr(char *str)
{
	int length = my_strlen(str);
	int i = 0;

	while (i < (length /2)) {
		my_revstr_swap(&str[i], &str[length - i - 1]);
		i = i + 1;
	}
	return (str);
}
