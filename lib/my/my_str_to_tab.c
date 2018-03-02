/*
** EPITECH PROJECT, 2018
** my_str_to_tab
** File description:
** convert str to word tab
*/

#include <stdlib.h>

static int get_number_of_space(char *str, char c);
static char* get_str(char *str, char c, int n);

char *get_str(char *str, char c, int n)
{
	int start_word = 0;
	int len = 0;
	char *res = NULL;

	for (int i = 0; str[i] != '\0' && n > 0; i++) {
		if (str[i] == c) {
			start_word = i + 1;
			n -= 1;
		}
	}
	for (int i = 0; str[i + start_word] != c && str[i + start_word]; i++)
		len = i + 1;
	res = malloc(len + 1);
	for (int i = 0; i < len; i++){
		res[i] = str[i + start_word];
	}
	res[len] = '\0';
	return (res);
}

int get_number_of_space(char *str, char c)
{
	int number_of_space = 0;

	for (int i = 0; str[i]; i++)
		if (str[i] == c)
			number_of_space++;
	return (number_of_space);
}

char **my_str_to_tab(char *str, char c)
{
	int number_of_space = get_number_of_space(str, c);
	char **tab = malloc(number_of_space + 2 * sizeof(char*));

	for (int j = 0; j < number_of_space + 1; j++){
		tab[j] = get_str(str, c, j);
	}
	tab[number_of_space + 1] = NULL;
	return (tab);
}
