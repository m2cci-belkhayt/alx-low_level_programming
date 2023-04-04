#include "main.h"

/**
 * _memset - is a pointer that points in an array function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 *
 * @n: bytes of the memory area pointed to by @s
 * @s: is an array filled with the constant char @b
 *@b: memory area filled
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
