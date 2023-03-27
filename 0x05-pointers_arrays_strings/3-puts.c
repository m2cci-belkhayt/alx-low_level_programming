#include "main.h"
/**
 * _puts - it returns a string
 * @str: is a string
 * Return a string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
