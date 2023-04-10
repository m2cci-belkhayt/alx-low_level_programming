#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers provided as arguments.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
}
