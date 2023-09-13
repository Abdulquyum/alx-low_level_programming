#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c < 10)
			{
				printf("  %d", c);
			}
			else
				printf(" %d", c);

			if (b < 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
