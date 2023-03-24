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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
}
