#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char ch_1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (ch_1 <= 'Z')
	{
		putchar(ch_1);
		++ch_1;
	}
	putchar('\n');

	return (0);
}
