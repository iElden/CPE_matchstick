/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** contactenate two string
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = my_strlen(src);
	char* result = malloc(my_strlen(dest) + j);

	for (; src[i] != 0; i++)
		result[i] = src[i];
	for (; src[i-j] != 0; i++)
		result[i] = dest[i - j];
	result[i] = 0;
	return (result);
}
