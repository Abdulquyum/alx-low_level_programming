#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sum of 2-D arrays
 * @a: parameter for array pointer 
 * @size: size of array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int q, j, add1 = 0, add2 = 0;

	for (q = 0; q < size; q++)
	{
		for (j = 0; j < size; j++)
		{
			if (q == j)
				add1 += a[q * size + q];
			else if (q + j == size - 1)
				add2 += a[q * size + (size - 1 - q)];
		}
	}
	printf("%d, %d\n", add1, add2);
}
