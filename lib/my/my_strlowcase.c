/* Total attendance at sessions : 7 
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** 
*/
char	*my_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0'){
		if ((str <= 90) && (str[i] >= 65)){
			str[i] = str[i] + 32;
		}
		i = i + 1;
	}
	return(str);
}
