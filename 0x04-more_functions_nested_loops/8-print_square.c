#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: parameter for size of square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int q, b;

	if (size <= 0)
		_putchar('\n');

	for (q = 0; q < size; q++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);		}
		_putchar('\n');
	}
}
