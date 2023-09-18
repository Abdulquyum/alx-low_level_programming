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
	int q, lenght = 0;
	char string;

	for (q = 0; s[q] != '\0'; q++)
	{
		lenght++;
	}

	for (q = lenght; s[q] >= 0; q--)
	{
		string = s[q];
		_putchar(string);
	}
	_putchar('\n');
}
