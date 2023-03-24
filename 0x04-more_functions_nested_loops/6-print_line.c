#include "main.h"

/**
 * print_line - draw line
 *
 * @n: parameter passsed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (q = 0; q <= n; q++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}

}
