/*
** EPITECH PROJECT, 2017
** strncat
** File description:
** concatenate n char
*/

#include "my.h"

char *my_strncat(char *dest, const char *src, int n)
{
	int dest_len = my_strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i ++) {
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
