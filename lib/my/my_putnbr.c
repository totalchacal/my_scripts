/*
** EPITECH PROJECT, 2017
** My_put_nbr
** File description:
** PutNBR
*/

void	my_putnbr(int nb)
{
	if (nb > 9) {
		my_putnbr(nb / 10);
	}
	if (nb < 0) {
		nb = nb * (-1);
		my_putchar('-');
		my_putnbr(nb / 10);
	}
	my_putchar((nb % 10) + '0');
}
