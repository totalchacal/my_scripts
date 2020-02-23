/*
** EPITECH PROJECT, 2017
** my_compute_factorial_rec.c
** File description:
** 
*/
int	my_compute_factorial_rec(int nb)
{
	int nb;
	int b;

	if ( nb == 0 ){
		return(0);
}
	if (nb == 1){
		return(1);
	}
	while(b != 1){
		my_compute_factorial_rec(nb + '0');
		b = b - 1;
		nb = result;
	}
	return(result);
}
