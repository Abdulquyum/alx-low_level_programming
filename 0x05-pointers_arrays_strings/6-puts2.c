#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: parameter passed
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int u = 0;

	while (str[u] != '\0')
	{
		if (u % 2 == 0)
		{
			_putchar(str[u]);
		}
		u++;
	}
	_putchar('\n');
}
