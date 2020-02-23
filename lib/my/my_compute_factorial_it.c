/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it.c
** File description:
** 
*/


#include <unistd.h>
void	my_putchar(char c)
{
	write(1, &c, 1);
}
int	my_compute_factorial_it(int nb)
{
	int result;
	int b;

	b = nb;
	result = 0;
	if((nb <0) || ( nb > 12 )){
		return(0);
	}
	if(nb == 0){
		return(1);
	}
	while (b != 1) {
		result = nb *(b - 1);
		b = b - 1;
		nb = result;
	}
	return(result);
}
