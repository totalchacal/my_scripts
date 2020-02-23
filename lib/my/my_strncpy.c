/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** 
*/
char *my_strncpy(char *dest, char const *src, int n)
{
	int i;

	i = 0;
	while((src[i] != n) && (src[i] != '\0')){
		dest[i] = src[i];
		(i = i + 1);
	}
		return(dest);
}
