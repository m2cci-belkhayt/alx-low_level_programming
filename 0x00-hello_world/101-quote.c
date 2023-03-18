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
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
