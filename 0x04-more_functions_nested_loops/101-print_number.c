#include "main.h"

/**
 * print_number - Prints any number
 *
 * @n: parameter passed to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int q, count;

	count = 0;
	for (q = n; q < count; q++)
	{
	_putchar(q / 10 + '0');
	_putchar(q % 10 + '0');
	count++;
	}
}
