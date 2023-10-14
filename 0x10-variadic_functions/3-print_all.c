#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all argument
 *
 * @format: compulsory parameter
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int q, b;
	char a,*str;
	float c;

	va_list all;

	va_start(all, format);

	q = 0;
	while (format[q] != '\0')
	{
		if (format[q] == 'c')
		{
			a = va_arg(all, int);
			printf("%c", a);
		}
		
	     	if (format[q] == 'i')
		{
			b = va_arg(all, int);
			printf("%d", b);
		}
		if (format[q] == 'f')
		{
			c = va_arg(all, double);
			printf("%f", c);
		}
	     	if (format[q] == 's')
		{
			str = va_arg(all, char *);

			if (str == NULL)
				printf("%s", "nil");
			else
				printf("%s", str);
		}

		if (format[q + 1] != '\0' && (format[q] == 'c' || format[q] == 'i' || format[q] == 'f' || format[q] == 's'))
		            printf(", ");

		q++;
	}
	printf("\n");
}
