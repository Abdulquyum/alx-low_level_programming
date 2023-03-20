#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int q;
	int m;

	for (q = 0; q <= 9; q++)
	{
		for (m = 1; m < 10; m++)
		{
			if (q < m && q != m)
			{
				putchar(q + '0');
				putchar(m + '0');
				if (q + m != 17)
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
