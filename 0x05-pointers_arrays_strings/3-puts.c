#include "main.h"

/**
 * _puts - prints string to stdout
 *
 * @str: parameter string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
	{
		_putchar(str[q]);
	}

		_putchar('\n');
}
