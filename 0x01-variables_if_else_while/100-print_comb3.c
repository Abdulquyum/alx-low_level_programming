#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q, y;

	for (q = 0; q < 9; q++)
	{
		for (y = q + 1; y <= 9; y++)
		{
			putchar(q + '0');
			putchar(y + '0');
			
			if (q < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
