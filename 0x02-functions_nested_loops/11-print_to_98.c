#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from unknown num to 98
 *
 * @n: parameter for unknown number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int q;

	if (n > 98)
	{
		for (q = n; q >= 98; q--)
		{
			printf("%d", q);
			if (q != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (q = n; q <= 98; q++)
		{
			printf("%d", q);
			if (q != 98)
				printf(", ");
		}
		printf("\n");
	}
}
