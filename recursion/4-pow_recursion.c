#include "main.h"

/**
 * _pow_recursion - Brief description of what the function does.
 * @x: Describe the parameter x.
 * @y: Describe the parameter y.
 *
 * Return: Description of what the function returns.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
