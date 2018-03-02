/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** copy a string with n char (Task 02)
*/

char *my_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++) {
		dest[i] = src[i];
	}
	for (; i > n; i++) {
		dest[i] = '\0';
	}
	return (dest);
}
