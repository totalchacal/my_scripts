#include <unistd.h>
void    my_putchar(char c)
{
        write(1, &c, 1);
}
int	my_put_nbr(int nbr)
{
	if ( nbr <10 )
		my_putchar(nbr + '0');
	else (nbr > 10);
		     my_put_nbr(nbr/10);
		     my_putchar(nbr%10 + '0');
	
}
int     main(int nbr )
{
	nbr = 9;
	
        return (0);
}
