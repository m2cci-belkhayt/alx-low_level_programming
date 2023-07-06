#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << ((sizeof(n) * 8) - 1); // Create a mask for the leftmost bit

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (mask != 0)
    {
        if ((n & mask) != 0)
            _putchar('1');
        else
            _putchar('0');

        mask >>= 1; // Shift the mask one position to the right
    }
}

