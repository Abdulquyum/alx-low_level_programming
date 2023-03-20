#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int q;
	int u;
	int y;

	for (q = 0; q < 10; q++)
	{
		for (u = 1; u < 10; u++)
		{
			for (y = 2; u <= 9; y++)
			{
				if (q < u && u < y)
				{
					putchar(q + '0');
					putchar(u + '0');
					putchar(y + '0');
					if (q + u + y != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
