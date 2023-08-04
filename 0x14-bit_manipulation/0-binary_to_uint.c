#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	int base = 1;
	int length = 0;
	
	if (b == NULL) 
	{
        	return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	}
	for (length = i - 1; length >= 0; length--)
	{
		/* check for invalid chars */
		if (b[length] != '0' && b[length] != '1')
			return (0);
		/* shift num left and add current bit */
		if (b[length] == '1')
			num += base;
		base *= 2;
	}
	return (num);
}
