#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: parameter passed
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int q;

	for(q = 0; q < n; q++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else{
			_putchar(95);
		}
	}
	_putchar('\n');
}
