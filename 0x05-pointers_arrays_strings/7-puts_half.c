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
	int q, lenght = 0;
	char string;

	for (q = 0; str[q] != '\0'; q++)
	{
		lenght++;
	}

	if (lenght % 2 == 0)
	{
		for (q = lenght / 2; str[q] != '\0'; q++)
		{
			string = str[q];
			_putchar(string);
		}
	}
	else
	{
		for (q = (lenght - 1) / 2; str[q] != '\0'; q++)
		{
			string = str[q];
			_putchar(string);
		}
	}
	_putchar('\n');
}
