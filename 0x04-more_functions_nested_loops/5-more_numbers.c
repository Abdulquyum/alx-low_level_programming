#include "main.h"

/**
 * more_numbers - prints 0 to 14, ten times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 14; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(b + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
