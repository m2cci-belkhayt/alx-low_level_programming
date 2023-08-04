#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *c = (unsigned char *)&x;

	/* Check the value of the first byte*/
	if (*c == 1)
	{
		/* The system is little-endian*/
		return (1);
	}
	else
	{
		/* The system is big-endian*/
		return (0);
	}
}
