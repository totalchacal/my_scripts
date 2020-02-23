/*
** EPITECH PROJECT, 2017
** my_print_comb.c
** File description:
** 
*/
void    my_putchar(char c);
int	my_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a < '7' + 1) {
		while (b < '8' + 1) {
			while (c < '9' + 1 ) {
				if ((a < b)&&(b < c)){
				my_putchar(a);
				my_putchar(b);
				my_putchar(c);
				if ((a < '7')||(b < '8')||(c < '9')){
					my_putchar(',');
				        my_putchar(' ');
						}
				}
				c = c+1;
			}
			c = b;
			b = b + 1;
		}
		b=a;
		a = a + 1;
	}
	return (0);
}	
	      
