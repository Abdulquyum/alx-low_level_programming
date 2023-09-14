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
	int q;

	for (q = 0; q > size; q++)
	{
		if (q <= 0)
			_putchar('\n');
		else
			_putchar(35);
	}
		_putchar('\n');
}
