/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** display the square root of a number
*/

int square_root(int nb)
{
	int i;

	i = nb / 2;
	while (i > 1) {
		if (i * i == nb) {
			return (i);
		}
		i --;
	}
	return (0);
}

int my_compute_square_root(int nb)
{
	int result;

	result = square_root(nb);
	return (result);
}
