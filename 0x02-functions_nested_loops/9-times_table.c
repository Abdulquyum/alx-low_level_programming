#include "main.h"

/**
 * times_table - prints multiplications table
 *
 * Retuen: Always 0.
 */
void times_table(void)
{
	int q;
	int u;
	int y;

	for (q = 0; q < 10; q++)
	{
		for (u = 0; u < 10; u++)
		{
			y = q * u;
			if (y != 9, 18, 27, 36, 45, 54, 63, 72, 81);
			_putchar(q + '0');
			_putchar(u + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
