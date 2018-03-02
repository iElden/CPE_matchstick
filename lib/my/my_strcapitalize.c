/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** upcase first letter of each word
*/

#include "my.h"

static int is_printable(char c);

int is_printable(char c)
{
	if (c < 20 || c > 126)
		return (0);
	return (1);

}

char *my_strcapitalize(char *str)
{
	for (int i = 0; str[i + 1]; i++) {
		if (is_printable(str[i + 1]) && !is_printable(str[i]))
			str[i + 1] -= 32;
	}
	return (str);
}
