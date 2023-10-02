#include "main.h"

/**
 * _puts - prints string with new line
 *
 * @s: string
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	int q;
	char str;

	for (q = 0; s[q] != '\0'; q++)
	{
		str = str[q];
		_putchar(str);
	}
	_putchar('\n');
}
