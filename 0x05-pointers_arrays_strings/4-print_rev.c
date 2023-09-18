#include "main.h"

/**
 * print_rev - prints strings in reverse order
 *
 * @s: parameter for string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	long int q, lenght = 0;
	unsigned char string;

	for (q = 0; s[q] != '\0'; q++)
	{
		lenght++;
	}

	for (q = lenght; s[q] >= 0; q--)
	{
		if (lenght == 0)
		break;

		string = s[q];
		_putchar(string);
	}
	_putchar('\n');
}
