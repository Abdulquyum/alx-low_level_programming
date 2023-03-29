#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: parameter passed
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int y = 0;

	while (s[y])
		y++;
	while (y--)
		_putchar(s[y]);
	_putchar('\n');
}
