#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Description: Replaces letters a, e, o, t, and l (case insensitive)
 * with 4, 3, 0, 7, and 1, respectively.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
