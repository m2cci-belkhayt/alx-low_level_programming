#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}