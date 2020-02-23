/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** 
*/
int	my_strlen(char const *str)
{
	int  i;
	
	while (str[i] !='\0') {
		i = i + 1;
	}
	return(i + '0');
	
}

