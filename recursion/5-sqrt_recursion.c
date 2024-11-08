#include "main.h"

/**
 * helper-Helps to find the square root by trying possible values recursively
 * @n: The number to find the square root of.
 * @guess: The current number being tested as the square root.
 * Return: The natural square root of n, or -1 if none exists.
 */

int helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (helper(n, guess + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 1));
}

