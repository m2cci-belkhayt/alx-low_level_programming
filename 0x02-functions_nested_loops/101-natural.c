#include <stdio.h>

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

int main() {
    
	int sum = 0;
	
	for (int i = 1; i < 1024; i++) 
	{
		if (i % 3 == 0 || i % 5 == 0) 
		{
			sum += i;
		}
	}
	
	printf("%d\n", sum);
	return (0);
}
