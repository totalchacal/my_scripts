/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** 
*/
char	*my_strcpy(char *dest, char const *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		(i = i + 1 );
	}
	dest[i] = '\0';
	return (dest);
}