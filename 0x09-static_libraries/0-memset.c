#include "main.h"


/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately*/


char *_memset(char *s, char b, unsigned int n)
{
        char *p = s;
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                *p = b;
                p++;
        }

        return (s);
}
