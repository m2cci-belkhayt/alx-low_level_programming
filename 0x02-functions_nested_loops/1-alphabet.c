#include "main.h"

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while ( i < strlen(c) )
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

