#include "main.h"

/**
 * print_square - prints the result of a number multiplied by itself
 *
 * @size: parameter passed
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
