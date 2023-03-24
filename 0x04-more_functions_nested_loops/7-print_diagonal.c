#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: parameter passed
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int y;
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (m = 0; m < y; m++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
