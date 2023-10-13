#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string of character
 *
 * @separator: comma to seperate string
 * @n: number of argument to be passed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int q;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (q = 0; q < n; q++)
	{
		str = va_arg(strings, char *);

		if (separator != NULL)
		{
			if (str != NULL)
			{
				if (q < n - 1)
				{
					printf("%s%s", str, separator);
				}
				else
					printf("%s", str);
			}
			else
			{
				if (q < n - 1)
				{
					printf("%s%s", "nil", separator);
				}
				else
				{
					printf("nil");
				}
			}
		}
	}

	printf("\n");

	va_end(strings);
}
