/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** 
*/
char *my_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] !='\0'){
		if ((str[i] <= 122) && (str[i] >= 97)){
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return(str);
}
