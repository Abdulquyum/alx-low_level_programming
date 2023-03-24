#include "main.h"

/**
 * more_numbers - prints mure much numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int q;
	int y;

	for (q = 1; q <= 10; q++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

				_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
