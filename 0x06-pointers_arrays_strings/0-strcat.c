#include "main.h"

/**
 * _strcat: - concatenate two strings
 * @src: The source of strings
 * @dest: The destination of the string
 *
 * Return: a ponter to theconcatennated caracteres.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	if (dest == NULL || src == NULL)
                return NULL;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
                j++;
	for ( k = 0; k < i; k++)
	{
		dest[j + k] = src[k];
	}
	dest[i + j] = '\0';
	return(dest);
}
