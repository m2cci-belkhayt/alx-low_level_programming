#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{	
	int i = 0;
	for (i = 0 ; i < 10 ; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;

		}
		_putchar('\n');
	}
}
