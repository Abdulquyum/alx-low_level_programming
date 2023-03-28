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
	int y;
	int count = 0;

	for (y = 0; s[y] != '\0'; y++)
		count++;
	for (y = count; y >= 0; y--)
		_putchar(s[y]);
	_putchar('\n');
}
