/*
** EPITECH PROJECT, 2017
** my_print_alpha.c
** File description:
** 
*/
void	my_putchar(char c);
int	my_print_alpha(void)
{
	char a;

	a = 96;
	while (a<122) {
		a = a+1;
		my_putchar(a);
	}	      
	return (a);	
}
