#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings with variadic functions
 *
 * @separator: parameter for string to be printed between strings
 * @n: parameter for number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int q;
	char *s;

	va_start(strings, n);

	for (q = 0; q < n; q++)
	{
		s = va_arg(strings, char*);

		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);

		if (q != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
