#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints argument irrespective of its type
 *
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list everything;

	int q = 0;
	char *string;
	char *seprator = " ";

	va_start(everything, format);

	if (format)
	{
		while (format[q])
		{
			switch (format[q])
			{
				case 'c':
					printf("%s%c", seprator, va_arg(everything, int));
					break;
				case 'i':
					printf("%s%d", seprator, va_arg(everything, int));
					break;
				case 'f':
					printf("%s%f", seprator, va_arg(everything, double));
					break;
				case 's':
					string = va_arg(everything, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", seprator, string);
					break;
				default:
					q++;
					continue;
			}
			seprator = ", ";
			q++;
		}
	}
	va_end(everything);

	printf("\n");
}
