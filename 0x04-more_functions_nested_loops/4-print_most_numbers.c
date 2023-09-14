#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int q;

	for ( q = 48; q <= 57; q++)
	{
		if (q == 50)
			continue;
		if (q == 52)
			continue;
		_putchar(q);
	}
	_putchar('\n');
}
