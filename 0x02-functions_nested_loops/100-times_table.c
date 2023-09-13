#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints n time table
 *
 * @n: Unknown parameter to print its table
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int a, b, result;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			if (b == 0)
				printf("%d", result);
			else if (result < 10)
				printf("   %d", result);
			else if (result > 99)
				printf(" %d", result);
			else if (result > 999)
				printf("%d", result);
			else
				printf("  %d", result);
			if (b < n)
				printf(",");
		}
		printf("\n");
	}
}

