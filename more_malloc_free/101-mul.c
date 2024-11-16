#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: A pointer to the result as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2);
	int *result, i, j, pos1, pos2, carry, sum;
	char *final_result;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		pos1 = len1 - 1 - i;
		for (j = len2 - 1; j >= 0; j--)
		{
			pos2 = len2 - 1 - j;
			sum = (num1[i] - '0') * (num2[j] - '0');
			sum += result[pos1 + pos2] + carry;
			result[pos1 + pos2] = sum % 10;
			carry = sum / 10;
		}
		if (carry > 0)
			result[pos1 + pos2 + 1] += carry;
	}

	for (i = len1 + len2 - 1; i >= 0 && result[i] == 0; i--)
		;

	final_result = malloc(i + 2);
	if (final_result == NULL)
		print_error();

	for (j = 0; i >= 0; i--, j++)
		final_result[j] = result[i] + '0';
	final_result[j] = '\0';

	free(result);
	return (final_result);
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
	char *num1, *num2, *result;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		print_error();

	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);
	return (0);
}
