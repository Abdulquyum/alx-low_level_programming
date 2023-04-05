#include "main.h"

/**
 * _puts_recursion - prints string with recursion
 *
 * @s: parameter pointing to string
 *
 * Return: returns nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
