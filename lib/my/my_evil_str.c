/*                    
** EPITECH PROJECT, 2017
** my_evir_str.c
** File description:
** 
*/
#include <unistd.h>
int     my_putchar(char c)
{
        write(1, &c, 1);
}

int     my_evil_str(char *str)
{
        int i;
	int min;
	int max;
  
	i = 0;  
	while (str[i] !='\0') {
		i = i + 1;

	}
	min=0;
	max = i;
	my_putchar(min + '0');
	my_putchar(max + '0');
}		

