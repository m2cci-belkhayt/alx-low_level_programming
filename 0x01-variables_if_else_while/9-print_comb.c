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
	int i;
	
	for (i = 0; i < 10; i++)
	{
		if (i!=9)
		{
			putchar("%d, ", i);
		}
		else
			putchar("9\n");
	}

	return (0);
}
