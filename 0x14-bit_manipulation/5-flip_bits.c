#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to convert one number to another.
 * @n: unsigned long int representing the first number.
 * @m: unsigned long int representing the second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_result = n ^ m;
    unsigned int count = 0;

    while (xor_result > 0)
    {
        if (xor_result & 1)
            count++;

        xor_result >>= 1;
    }

    return count;
}

