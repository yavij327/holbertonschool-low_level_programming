#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to measure
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

