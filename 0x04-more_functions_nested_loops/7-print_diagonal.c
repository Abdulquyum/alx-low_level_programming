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
	int y;

	for (y = 1; y <= n; y++)
	{
		if (n <= 0)
			_putchar('\n');
		else if (y < n)
			_putchar(' ');
		else
			_putchar(92);
	}
	_putchar('\n');
}
