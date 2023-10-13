#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints all numbers passed
 *
 * @separator: comma to be printed after each number
 * @n: number of arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int q, m;

	va_list print_num;

	va_start(print_num, n);

	for (q = 0; q < n; q++)
	{
		m = va_arg(print_num, int);

		if (separator != NULL)
		{
			if (q < n - 1)
			{
				printf("%d%s", m, separator);
			}
			else
				printf("%d", m);
		}
	}
	printf("\n");

	va_end(print_num);
}
