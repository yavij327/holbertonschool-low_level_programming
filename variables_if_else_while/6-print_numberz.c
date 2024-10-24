#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line. It uses a loop and the
 * putchar function to achieve this.
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int ch;

		for (ch = 48; ch <= 57; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
