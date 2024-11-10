#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The argument count.
 * @argv: The argument vector (not used here).
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
