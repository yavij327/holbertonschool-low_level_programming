#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n. If n is less than 0, returns -1 to indicate
 * an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
