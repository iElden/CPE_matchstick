/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header for my lib
*/

#ifndef __MY_H_
#define __MY_H_

#define READ_SIZE 50

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_puterror(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
int	my_getnbr_base(char const *str, char const *base);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char const *str, char const *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);
int	exponant(int nb, int n);
int	get_number_length(int nb);
int	number_exponant_n(int nb, int n);
void	my_swaps(char *c1, char *c2);
int	my_putnbr_base_long(long number, char const *base, int draw);
void	show_address(char *address);
void	showmem_chars(char const *str, int size, int *sizes);
int	showmem_values(char const *str, int size, int buffer);
int	my_putnbr_base(int nbr, char const *base);
int	check_end(int *array, int size);
int	compare_strings(char const *str, char const *str2);
char	*sub_strings(char const *str, int start, int end, char *to_return);
void	show_str_array(char **tab);
void	show_int_array(int *tab, int size);
char	*my_strdup(char const *str);
int	find_digit_base(char c, char const *base);
int	is_low(char c);
int	is_up(char c);
int	is_dig(char c);
void	disp(int size, int buffer);
int	convert_to_int(long result_long);
void	my_printf(char *str, ...);
char	*get_next_line(int fd);
#endif
