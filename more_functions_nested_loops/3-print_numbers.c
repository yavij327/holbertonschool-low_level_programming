#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */

void print_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		_putchar(d);
	_putchar('\n');
}
