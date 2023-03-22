#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void print_times_table(int n)
{

int a = 0;
int b;
int rep;

while (a <= n)
{
        if ((n==0) || (n>15))
	{
		break;
	}
	
	b = 0;
        while (b <= n)
        {
                rep = a * b;
                if (b == 0)
                {
                        _putchar('0' + rep);
                }
                else if (rep < 10)
                {
                        _putchar(' ');
                        _putchar('0' + rep);
                }
                else
                {
                        _putchar('0' + rep / 10);
                        _putchar('0' + rep % 10);
                }

                if (b < 9)
                {
                        _putchar(',');
                        _putchar(' ');
                }
                b++;
        }
        _putchar('\n');
        a++;
}

}
