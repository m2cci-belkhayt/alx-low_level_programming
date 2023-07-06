#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * 
 * @b: binary constance character.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int len = 0;
    int base = 1;
    int i;

    while (b[len] != '\0')
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            return 0;
        }

        if (b[i] == '1')
        {
            result += base;
        }

        base *= 2;
    }

    return result;
}
