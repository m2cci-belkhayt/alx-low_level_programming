#include "main.h"

/**
 * _abs- return the absolite numers
 * @n : number to check
 * Return: numberabs
 */

int _abs(int n)
{
	int test;

	if (n >= 0)
	{
		test = n;
	}

	else
	{
		test = -n;
	}

	return (test);
}
