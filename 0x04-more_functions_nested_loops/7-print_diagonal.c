#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: parameter passed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int y, space;

	if (n <= 0)
		_putchar('\n');
	for (y = 1; y <= n; y++)
	{
		for (space = 0; space < y; space++)
		{
			if (space != 0)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
