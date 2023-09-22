#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: array of int
 * @n: number of elements to reverse
 *
 * Return: rest of the array
 */
void reverse_array(int *a, int n)
{
	int q, save;

	for (q = 0; q < n / 2; q++)
	{
		save = a[q];
		a[q] = a[n - q - 1];
		a[n - q - 1] = save;
	}
}

