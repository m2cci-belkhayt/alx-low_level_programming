#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
    int significant_digit = 0;
    unsigned long int mask = 1UL << ((sizeof(n) * 8) - 1);

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (mask != 0)
    {
        if ((n & mask) != 0)
        {
            _putchar('1');
            significant_digit = 1;
        }
        else if (significant_digit)
        {
            _putchar('0');
        }

        mask >>= 1;
    }
}
