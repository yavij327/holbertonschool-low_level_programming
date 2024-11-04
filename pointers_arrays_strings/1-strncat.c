#include "main.h"

/**
 * _strncat - Concatenates at most n bytes of the src string to the dest string
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}

