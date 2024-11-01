#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int a = 0;
	int z = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	a--;

	while (z < a)
	{
		char temp = s[z];

		s[z] = s[a];
		s[a] = temp;

		z++;
		a--;
	}
}
