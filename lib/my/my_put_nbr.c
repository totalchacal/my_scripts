/*
** EPITECH PROJECT, 2017
** my_putnbr
** File description:
** putnbrr
*/

int	my_putnbr(int nb)
{
	int cpt = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb > 9) {
		cpt = nb % 10;
		nb = (nb - cpt) / 10;
		my_putnbr(nb);
		my_putchar('0' + cpt);
	}
	else {
		my_putchar ('0' + nb);
	}
	return (0);
}
