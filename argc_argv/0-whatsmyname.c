#include <stdio.h>

/**
 * main - Prints the program's name followed by a new line.
 * @argc: The argument count (not used here).
 * @argv: The argument vector, where argv[0] contains the program's name.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
