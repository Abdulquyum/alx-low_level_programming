#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string printed between numbers
 * @n: number of interger passed to function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int q;

	va_start(numbers, n);

	for (q = 0; q < n; q++)
	{
		printf("%d", va_arg(numbers, int));

		if (q != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
