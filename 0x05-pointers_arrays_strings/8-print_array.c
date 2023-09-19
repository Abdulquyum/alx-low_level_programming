#include "main.h"

/**
 * print_array - prints from the nth element of array of int
 *
 * @a: parameter for the name of array
 * @n: parameter for the size of array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		printf("%d", a[q]);

		if (q < n - 1)
			printf(", ");
	}
	printf("\n");
}
