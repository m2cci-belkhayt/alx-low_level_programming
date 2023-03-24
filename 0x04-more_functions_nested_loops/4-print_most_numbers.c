#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	
	:char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (c != '2' && c != '4')
	_putchar(c);
	}

	_putchar('\n');
}
