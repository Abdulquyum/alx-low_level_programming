#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: parameter passed to function
 *
 * Return: return last digit
 */
int print_last_digit(int n)
{
	int q;

	if (n < 0)
		n = -n;
		
	q = (n % 10);

	return (q);
}
