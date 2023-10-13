#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all argument given to it
 *
 * @format: variable format
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int q;
	char *str, *comma = ", ";

	va_list all;

	va_start(all, format);

	q = 0;
	while (format[q] != '\0')
	{
		if (format[q] == 'c')
		{
			printf("%c%s", va_arg(all, int), comma);
		}
		else if (format[q] == 'i')
		{
			printf("%d%s", va_arg(all, int), comma);
		}
		else if (format[q] == 'f')
		{
			printf("%f%s", va_arg(all, double), comma);
		}
		else if(format[q] == 's')
		{
			str = va_arg(all, char *);

			if (str != NULL)
				printf("%s", str);
			else
				printf("%s", "nil");
		}
		q++;
	}

	printf("\n");

	va_end(all);
}
