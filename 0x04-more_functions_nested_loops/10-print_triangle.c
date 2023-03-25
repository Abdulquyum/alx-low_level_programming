#include "main.h"

/**
 * print_triangle - prints triangular shape
 *
 * @size: parameter passed
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int j;
	int l;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
		for (l = size - j; l > 1; l--)
		{
			_putchar(32);
		}
		for (n = 0; n <= j; n++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
}
