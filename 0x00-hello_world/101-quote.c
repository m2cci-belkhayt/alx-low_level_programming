#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main: Begin as a main
 *
 * Description: this description gives something
 *
 * Return: this function return 1 if the program is written and 0 id not 
 */
int main(void)
{
	if (write(STDERR_FILENO, MESSAGE, sizeof(MESSAGE) - 1) != sizeof(MESSAGE) - 1)
	{
		return 1;
	}
	return 0;
}
