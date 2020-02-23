/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** 
*/
int	my_strncmp(char const *s1, char const *s2, int n)
{
	int i;
	int j;

	i  = 0;
	j = 0;
	while((s1[i] != 'n') && (s1[j] !='\0')){
		i = i + 1;
	}
	while((s2[j] != 'n') && (s2[j] !='\0')){
		j = j + 1;
	}
	if ( i < j ){
		return(-1);
	}
	if ( i == j ){
		return(0);
	}
	else{
		return(1);
	}
}
