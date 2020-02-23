/*
** EPITECH PROJECT, 2017
** my_print_comb2
** File description:
** 
*/

#include <unistd.h>
void my_putchar(char c)
{
        write(1, &c, 1);
}

int     main(void)
{
        char a;
        char b;
        char c;

        a = '0';
        b = '0';
        c = '0';
        while (a < '9') {
                while (b < '9') {
                        while (c < '9' ) {
				while (d = '9'){
					if (a*10 + b < c * 10 + d) {
                                my_putchar(a);
                                my_putchar(b);
                                my_putchar(c);
                                my_putchar(' ');
				my_putchar(c);
				my_putchar(d);
				if (a + b + c + d != 227) {
					my_putchar(',');
					my_putchar(' ');
				}
					}
					d += '0';
					c += 1;
				}
				c = '0';
				b += 1;
			}
			b = '0';
			a += 1;			
        }
        return (0);
}
