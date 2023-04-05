#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diadonals
 *
 * @a: parameter for matrix of an int
 * @size: parameter size of a matrix
 */
void print_diagsums(int *a, int size)
{
	int count;
	int sum_1 = 0;
	int sum_2 = 0;

	for (count = 0; count < size; count++)
	{
		sum_1 += a[count];
		a += size;
	}
	a -= size;

	for (count = 0; count < size; count++)
	{
		sum_2 += a[count];
		a -= size;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
