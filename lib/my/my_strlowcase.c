/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** lowcase all str
*/

char *my_strlowcase(char *str)
{
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] > 'A' && str[i] < 'Z')
			str[i] += 32;
	}
	return (str);
}
