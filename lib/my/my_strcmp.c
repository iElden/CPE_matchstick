/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare two string
*/

int strcmp(char const *s1, char const *s2)
{
	for (int i = 0; s1[i] && s2[i]; i++)
		if (s1[i] != s2[i])
			return (0);
	return (1);
}
