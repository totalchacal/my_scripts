/*
** EPITECH PROJECT, 2017
** my_print_digits.c
** File description:
** 
*/
void    my_putchar(char c);
int	my_print_digits(void)
{
	char a;

	a=47;
	while (a<57) {
		a = a+1;
		my_putchar(a);
	}
	return(0);
}
