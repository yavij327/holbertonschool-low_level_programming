#include "main.h"
#include <stdio.h>

/**
 * helper - Checks if n is divisible by any number other than 1 and itself.
 * @n: The number to check.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (helper(n, divisor + 1));
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper(n, 2));
}
