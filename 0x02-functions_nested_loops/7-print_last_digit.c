#include "main.h"

/**
 * print_last_digit - prints last digits
 *
 * @y: parameter
 *
 * Return: Always 0.
 */
int print_last_digit(int y)
{
	int n;

	n = y % 10;
	if (y < 0)
		n = -n;
	return (n);
}
