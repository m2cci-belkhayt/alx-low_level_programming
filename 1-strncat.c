#include "main.h"

/**
 * _strncat - concatenate words of length n
 * @dest which is pointer of the string
 * @src: same thing a string pointer
 * @n: is a lrngth
 * Return: Always string of length n.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for  (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src != '\0' && j <= n; j++)
	{
		dest[i + j] = src[j];
	}
	des[i + j] = '\0';
	return(dest)
}
