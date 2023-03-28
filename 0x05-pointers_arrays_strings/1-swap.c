#include "main.h"

/**
 * swap_int - swaps the value of two ints into each other
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
