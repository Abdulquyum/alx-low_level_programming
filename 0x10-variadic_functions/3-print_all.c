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
	char *str;

	va_list all;

	va_start(all, format);

	q = 0;
	while (format[q] != '\0')
	{
		if (format[q] == 'c')
		{
			printf("%c", va_arg(all, int));
		}
		else if (format[q] == 'i')
		{
			printf("%d", va_arg(all, int));
		}
		else if (format[q] == 'f')
		{
			printf("%f", va_arg(all, double));
		}
		else if (format[q] == 's')
		{
			str = va_arg(all, char *);

			if (str != NULL)
				printf("%s", str);
			else
				printf("%s", "nil");
		}
		else if (format[q] != '\0')
		{
			printf(", ");
		}
		else
			return;
		q++;
	}
	printf("\n");

	va_end(all);
}
