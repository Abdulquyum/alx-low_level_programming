#include "main.h"
#include <stdio.h>

/**
 * _puts - prints strings of character
 *
 * @s: parameter pointing to strings
 *
 * Return: Always 0.
 */

void _puts(char *s)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
	{
		_putchar(s[q]);
	}
		_putchar('\n');
}
