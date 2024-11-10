#include <stdio.h>

/**
 * main - Prints all arguments it receives, one per line.
 * @argc: The argument count.
 * @argv: The argument vector, which holds each argument as a string.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
