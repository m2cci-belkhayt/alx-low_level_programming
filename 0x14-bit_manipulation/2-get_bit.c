#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask = 1UL << index;

    if (index < 64)
    {
        if ((n & mask) != 0)
            return 1;
        else
            return 0;
    }

    return (-1);
}
