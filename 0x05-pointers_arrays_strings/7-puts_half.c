#include "main.h"

/**
 * puts_half - Prints the second half of the string.
 *
 * @str: parameter for string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int q, length = 0;
	char string;

	for (q = 0; str[q] != '\0'; q++)
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (q = length / 2; str[q] != '\0'; q++)
		{
			string = str[q];
			_putchar(string);
		}
	}
	else
	{
		for (q = (length + 1) / 2; str[q] != '\0'; q++)
		{
			string = str[q];
			_putchar(string);
		}
	}
	_putchar('\n');
}
