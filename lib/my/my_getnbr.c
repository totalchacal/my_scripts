/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** 
*/

#include <unistd.h>
int	my_putchar(char c)
{
	write (1, &c, 1);
}

int	my_getnbr(char const *str)
{
	int i;

	i = 0;
	while (str[i] !='\0'){
		(i = i + 1);
		if (str[i] < 10) {
			my_putchar(str[i]);
		}		
		else
			return(0);
	}
}
