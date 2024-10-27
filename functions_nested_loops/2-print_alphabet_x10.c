#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}

		_putchar('\n');
	}
}
