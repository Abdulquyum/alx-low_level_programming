#include "main.h"

/**
 * puts2 - prints 1 char and escape the next
 *
 * @str: parameter for string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int q;
	char string;

	for (q = 0; str[q] != '\0'; q++)
	{
		if (q % 2 == 1)
			continue;
		else
		{
			string = str[q];
			_putchar(string);
		}
	}
	_putchar('\n');
}
