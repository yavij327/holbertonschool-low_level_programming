#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string is composed of only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * print_error - Prints "Error" and exits with status 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	unsigned long result;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		print_error();

	result = strtoul(num1, NULL, 10) * strtoul(num2, NULL, 10);

	printf("%lu\n", result);
	return (0);
}
