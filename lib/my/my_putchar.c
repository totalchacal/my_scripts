/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** 
*/
#include <unistd.h>
void    my_putchar(char c)
{	
	write(1, &c, 1);
}

int    main(void)
{
  return (0);
}

