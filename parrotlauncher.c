/*
** EPITECH PROJECT, 2018
** parrotlauncher.c
** File description:
** it laucnh parrot
*/

#include <stdlib.h>
#include <stdio.h>


int main(int ac, char **av)
{
	if (ac != 2){
		printf("%s\n", "enter one argument");
		return (84);
	}
	else
		system(av[1]);
	return (0);
}
