#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer to the memory area to fill.
 * @b: The byte to fill the memory area with.
 * @n: Tthe number of bytes to fills.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
