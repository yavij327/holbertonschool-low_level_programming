#include "main.h"

/**
 * more_numbers - prints 10 times 0 to 14
 */
void more_numbers(void)
{
	int n, num;

	for (n = 0; n < 10; n++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('1');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

