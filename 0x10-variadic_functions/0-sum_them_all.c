#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all its parameter
 *
 * @n: parameter for argument
 *
 * Return: returns sum of all its parameter
 */
int sum_them_all(const unsigned int n, ...)
{

		va_list summation;
		unsigned int q, sum = 0;

		if (n == 0)
			return (0);

		va_start(summation, n);

		for (q = 0; q < n; q++)
		{
			sum += va_arg(summation, int);
		}

		va_end(summation);

		return (sum);
}
