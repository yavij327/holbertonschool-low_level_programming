#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a given separator.
 * @separator: The string to print between strings.
 * @n: The number of strings passed to the function.
 *
 * Description: If separator is NULL, it is ignored. If one of the
 * strings is NULL, "(nil)" is printed instead. A newline is printed
 * at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
