#include "main.h"

/**
 * _puts - Prints string then new line
 *
 * @s: parameter for string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int q;
	char string;

	for (q = 0; str[q] != '\0'; q++)
	{
		string = str[q];
		_putchar(string);
	}
	_putchar('\n');
}
