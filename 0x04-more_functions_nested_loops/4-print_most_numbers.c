#include "main.h"

/**
 * print_most_numbers - prints numerals excluding some
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		if (q == 2 || q == 4)
			continue;
		else
			_putchar(q + '0');
	}
		_putchar('\n');
}
