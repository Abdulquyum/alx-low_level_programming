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
	int m;
	int a;

	for (q = 0; q < 10; q++)
	{
		for (u = 0; u < 10; u++)
		{
			y = q * u;
			m = y / 10;
			a = y % 10;
			if (u == 0)
			{
				_putchar('0');
			}
			else if (y < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m + '0');
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
