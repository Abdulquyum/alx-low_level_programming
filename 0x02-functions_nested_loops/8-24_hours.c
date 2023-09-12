#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int q, y, m;

	for (q = 0; q <= 23; q++)
	{
		for (y = 0; y < 6; y++)
		{
			for (m = 0; m < 10; m++)
			{
				_putchar(q/10 + '0');
				_putchar(q%10 + '0');
				_putchar(':');
				_putchar(y + '0');
				_putchar(m + '0');
				_putchar('\n');
			}
		}
	}
}
