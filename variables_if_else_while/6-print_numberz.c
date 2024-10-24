#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return Always to 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');

	return (0);
}
