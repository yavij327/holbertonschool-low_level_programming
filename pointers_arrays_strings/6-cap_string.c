#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;


	char separators[] = " \t\n,;.!?\"(){}";

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;

	while (str[i] != '\0')
	{
		int j = 0;

		while (separators[j] != '\0')
		{
			if (str[i - 1] == separators[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}

