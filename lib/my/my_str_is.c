/*
** EPITECH PROJECT, 2017
** my_str_is.c
** File description:
** check if str is alpha/num/lower ect ...
*/

int my_str_isalpha(char const *str)
{
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] < 'A' || str[i] > 'z' || \
(str[i] > 'Z' && str[i] < 'A'))
			return (0);
	}
	return (1);
}

int my_str_isnum(char const *str)
{
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

int my_str_islower(char const *str)
{
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}

int my_str_isupper(char const *str)
{
	for (int i = 0; str[i] != 0; i ++) {
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}

int my_str_isprintable(char const *str)
{
	for (int i = 0; str[i] != 0; i ++) {
		if (str[i] < 20 || str[i] > 126)
			return (0);
	}
	return (1);
}
