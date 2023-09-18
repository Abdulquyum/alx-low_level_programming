#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: Pointer to int a
 * @b: pointer to int b
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
