/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** 
*/
char	*my_revstr(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i>=j)
	{
		k = str[i];
		str[i] = str[j];
		str[j] = k;
		i = i - 1;
		j = j + 1;
	}
	return(str);
}
