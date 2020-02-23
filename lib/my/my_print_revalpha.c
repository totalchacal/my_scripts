/*
** EPITECH PROJECT, 2017
** my_print_revalpha.c
** File description:
** 
*/
void    my_putchar(char c);
int	my_print_revalpha(void)
{
	char a;

	a=123;
	while (a>97) {
		a = a-1 ;
		my_putchar(a);
	}
	return (0);
}
