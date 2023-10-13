#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all its parameter
 *
 * @n: number of arguments to be passed
 *
 * Return: sum of all arguments passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int q;
	int sum = 0;

	va_list add_list;

	va_start(add_list, n);

	if (n == 0)
	{
		va_end(add_list);

		return (0);
	}

	for (q = 0; q < n; q++)
	{
		sum += va_arg(add_list, int);
	}

	va_end(add_list);

	return (sum);
}
